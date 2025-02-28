// 알람시계
#include <iostream>

using namespace std;

void changeTime(int &h, int &m) {
  if (m < 45) {
    m = m + 60;
    if (h < 1) {
      h = 23;
    } else {
      h = h - 1;
    }
  }
}

int main() {
  int h, m;

  cin >> h >> m;

  changeTime(h, m);

  cout << h << " " << m - 45 << '\n';
}