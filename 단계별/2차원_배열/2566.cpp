#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int arr[9][9] = {0};
  int maxNumber(0), row(0), col(0);

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (arr[i][j] > maxNumber) {
        maxNumber = arr[i][j];
        col = i;
        row = j;
      }
    }
  }

  cout << maxNumber << endl;
  cout << col + 1 << " " << row + 1;

  return 0;
}
