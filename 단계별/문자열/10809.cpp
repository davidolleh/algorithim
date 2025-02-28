// 알파벳 찾기

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int size = 'z' - 'a' + 1;
    int alpabet[size];

    for (int i = 0; i<size; i++) {
        alpabet[i] = -1;
    }

    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int index = s[i] - 'a';

        if (alpabet[index] == -1) {
            alpabet[index] = i;
        }
    }

    for (int k: alpabet) {
        cout << k << " ";
    }
}