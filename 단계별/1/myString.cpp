
#include <iostream>

using namespace std;

class CMyString {
    public:
    CMyString();
    ~CMyString();
    CMyString(const CMyString &rhs);
    CMyString(CMyString&& rhs);

    explicit CMyString(const char* str);

private:
    char *m_pszData = NULL;
    int m_nLength = 0;

    public:
    int setString(const char *pszParam);
    const char* getString();
    int getLength() const;
    void release();
    int append(const char *pszParam);
    CMyString& operator=(const CMyString &rhs);
    CMyString operator+(const CMyString &rhs);
    CMyString& operator+=(const CMyString &rhs);
};

CMyString::CMyString() {

}

CMyString::~CMyString() {
    release();
}

CMyString::CMyString(const char *rhs) {
    // cout << "MyString(const char *rhs)" << endl;

    this->setString(rhs);
}

CMyString::CMyString(const CMyString &rhs) {
    // cout << "MyString(const CMyString &rhs)" << endl;

    this->setString(rhs.m_pszData);
}

CMyString::CMyString(CMyString &&rhs) {
    cout << "이동 생성자" << endl;
    m_pszData = rhs.m_pszData;
    m_nLength = rhs.m_nLength;

    rhs.m_pszData = NULL;
    rhs.m_nLength = 0;
}



int CMyString::setString(const char *pszParam) {
    release();

    if (pszParam == NULL) {
        return 0;
    }

    this->m_nLength = strlen(pszParam);

    if (this->m_nLength == 0) {
        return 0;
    }

    this->m_pszData = new char[this->m_nLength + 1];

    strcpy(this->m_pszData, pszParam);

    return this->m_nLength;
}

int CMyString::append(const char *pszParam) {
    if (pszParam == NULL) {
        return 0;
    }

    int nLenPram = strlen(pszParam);

    if (nLenPram == 0) {
        return 0;
    }

    if (m_pszData == NULL) {
        setString(pszParam);

        return m_nLength;
    }

    int nLenCur = m_nLength;

    char *pszResult = new char[nLenCur + nLenPram + 1];

    strcat(pszResult, m_pszData);
    strcat(pszResult, pszParam);

    release();
    m_pszData = pszResult;
    m_nLength = nLenCur + nLenPram;

    return m_nLength;
}


const char* CMyString::getString() {
    return this->m_pszData;
}

int CMyString::getLength() const {
    return this->m_nLength;
}

void CMyString::release() {
    if (this->m_pszData != NULL) {
        delete[] this->m_pszData;
    }

    m_pszData = NULL;
    m_nLength = 0;
}

CMyString& CMyString::operator=(const CMyString &rhs) {
    if (this != &rhs)
        this->setString(rhs.m_pszData);

    return *this;
}

CMyString& CMyString::operator+=(const CMyString &rhs) {
    append(rhs.m_pszData);
    return *this;
}


CMyString CMyString::operator+(const CMyString &rhs) {
   CMyString strResult(m_pszData);
    strResult.append((rhs.m_pszData));

    return strResult;
}


void testFunc(CMyString &str) {
    cout << "function\n";

    str.setString("change!!");
}

CMyString getHello() {
    CMyString hello;
    hello.setString("hello");
    return hello;
}
int main() {
    CMyString strLeft("hello"), strRight("world"), strResult;

    strResult = strLeft + strRight;

    cout << strResult.getString() << endl;

    cout << strLeft.getString() << endl;

    strLeft += CMyString("world");

    cout << strLeft.getString() << endl;
}
