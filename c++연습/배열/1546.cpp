// 평균

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;

  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int maxScore = *max_element(arr, arr + n);
  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += static_cast<float>(arr[i]) / static_cast<float>(maxScore) * 100;
  }

  cout << (sum / n);

  delete[] arr;
}