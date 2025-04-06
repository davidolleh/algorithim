// 분수 찾기
#include <iostream>
#include <string>

using namespace std;

int changeFlag(int &flag) {
  if (flag == 0) {
    return 1;
  }

  return 0;
}

string findN(int X) {
  int standard = 1;
  int flag= 0;

  while (X > standard) {
    X -= standard;
    standard++;
    flag = changeFlag(flag);
  }

  int up = 1;
  int down = standard;

  while (X > 1) {
    up++;
    down--;
    X--;
  }

  if (flag == 1) {
    return to_string(up) + "/" + to_string(down);
  }
  return to_string(down) + "/" + to_string(up);
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int X;

  cin >> X;

  string s = findN(X);

  cout << s << endl;

  return 0;
}
