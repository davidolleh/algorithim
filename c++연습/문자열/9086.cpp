// 문자열

#include <iostream>

using namespace std;

int main() {
  int n;

  cin >> n;


  string s;
  for (int i = 0; i < n; i++) {
    getline(cin >> ws, s);

    cout << *s.begin() << *(s.end() - 1) << endl;
  }
}