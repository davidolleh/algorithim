// 단어의 개수

#include <iostream>
#include <string>

using namespace std;

int countWS(const string &s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            count++;
            while (s[i] != ' ') {
                i++;
            }
        }
    }

    return count;
}

int main() {

    string s;
    getline(cin, s);

    int ws = countWS(s);

    cout << ws;
}