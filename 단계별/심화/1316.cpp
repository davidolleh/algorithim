#include <iostream>
#include <map>

using namespace std;

bool isGroupWord(string &s) {
  map<char, int> count;

  for (int i = 0; i < s.length(); i++) {
    int lastIndex = count[s[i]];

    if (lastIndex == 0) {
      count[s[i]] = i + 1;
      continue;
    }

    if (i - lastIndex > 0) {
      return false;
    }

    count[s[i]] = i + 1;
  }

  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  int count = 0;

  cin >> n;

  vector<string> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (string s: v) {
    if (isGroupWord(s)) {
      count++;
    }
  }

  cout << count;

  return 0;
}
