// 상수

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compareReverseString(string &s1, string &s2) {
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    if (stoi(s1) > stoi(s2)) {
        return stoi(s1);
    }

    return stoi(s2);
}

int main() {
    string s[2];

    for (int i = 0; i < 2; i++) {
      cin >> s[i];
    }

    int answer = compareReverseString(s[0], s[1]);

    cout << answer << endl;

    return 0;
}
