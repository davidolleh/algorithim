// 소인수분해
#include <iostream>

using namespace std;

void getSoinSubunhae(int n) {
  if (n == 1) return;
  int startN = 2;
  while(true) {
    if (n / startN == 1 && n % startN == 0) {
      cout << startN << endl;
      break;
    }

    if (n % startN == 0) {
      cout << startN << endl;
      n /= startN;
      continue;
    }

    startN++;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  getSoinSubunhae(n);

  return 0;
}
