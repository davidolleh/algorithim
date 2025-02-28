// 바구니 뒤집기

#include <iostream>

using namespace std;

void func(int *arr, int sIdex, int eIdex) {
  for (int i = sIdex; i <= eIdex; i++) {
    swap(arr[i], arr[eIdex]);
    eIdex--;
  }
}

int main() {
  int n, m;

  cin >> n >> m;

  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }

  int sIndex, eIndex;

  for (int i = 0; i < m; i++) {
    cin >> sIndex >> eIndex;
    func(arr, sIndex- 1, eIndex - 1);
  }

  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}