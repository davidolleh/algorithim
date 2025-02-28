// 단어 공부

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void addAtMap(map<char, int> &m, char c) {
      if (m.find(c) == m.end()) {
        m[c] = 1;
        return;
      }
      m[c]++;
}

int main() {
  string str;

  cin >> str;

  for_each(str.begin(), str.end(), [](char &c){c = toupper(c);});

  map<char, int> charCounts;

  for (char c: str) {
       addAtMap(charCounts, c);
  }

  int max = 0;
  char maxChar;
  int cnt = 0;
  for (auto c: charCounts) {
    if (c.second > max) {
      maxChar = c.first;
      max = c.second;
      cnt = 1;
    } else if (c.second == max) {
      cnt++;
    }
  }

  if (cnt > 1) {
    cout << "?";
    return 0;
  }

  if (cnt == 1) {
    cout << maxChar;
    return 0;
  }
}