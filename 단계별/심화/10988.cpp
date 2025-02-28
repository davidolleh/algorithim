// 팰린드롬인지 확인하기

#include <iostream>

using namespace std;

int main() {
  string str;

  cin >> str;

  int i(0), j(str.length() - 1);

  while(i < j) {
    if (str[i] != str[j]) {
      break;
    }
    i++;
    j--;
  }

  if (i >= j) {
    cout << "1";
    return 0;
  }

  cout << "0";
  return 0;
}