// 벌집
#include<iostream>

using namespace std;

int countDoor(int &n) {
  int start = n - 1;
  int count = 1;

  if (start == 0) {
    return count;
  }

  int standard = 6;

  while (start > standard) {
     start = start - standard;
     count++;
     standard = standard + 6;
  }

  return count + 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;

  cin >> n;

  cout << countDoor(n);

  return 0;
}
