// X 보다 작은 수
#include <iostream>

using namespace std;

int n, x;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> x;

  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
     if (arr[i] < x)
       cout << arr[i] << " ";
  }

  delete[] arr;
}