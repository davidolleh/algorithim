// 최댓값
// Created by 황승준 on 2025. 1. 30..
//

#include <iostream>

using namespace std;

int maxIndex = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int arr[9];

  for (int i = 0; i < 9; i++) {
    cin >> arr[i];
  }

  for (int i = 0 ; i < 9; i++) {
    if (arr[i] > arr[maxIndex]) {
      maxIndex = i;
    }
  }

  cout << arr[maxIndex] << '\n' << maxIndex+1;
}
