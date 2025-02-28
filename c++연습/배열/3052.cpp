// 나머지

#include <iostream>

using namespace std;

int main() {
  const int DEVIDE_NUM = 42;
  int arr[DEVIDE_NUM] = { 0 };
  int n;

  for (int i = 0; i < 10; i++) {
      cin >> n;

      int r = n % DEVIDE_NUM;

      arr[r] = 1;
  }

  int cnt(0);
  for (int i = 0; i < DEVIDE_NUM; i++) {
    if (arr[i] == 1) {
      cnt++;
    }
  }

  cout << cnt;
}
