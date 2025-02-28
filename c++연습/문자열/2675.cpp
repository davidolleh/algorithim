// 문자열 반복

#include <iostream>

using namespace std;

void func1() {
    int count;
    string s, newS;
    cin >> count >> s;

    for (char c: s) {
        for (int i = 0; i < count; i++) {
          newS += c;
        }
    }


    cout << newS << endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
      func1();
    }
}