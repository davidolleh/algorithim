// 공 넣기

#include <iostream>

using namespace std;

void func1(int *output) {
  int i, j, k;

  cin >> i >> j >> k;

  for (int l = i; l <= j; l++) {
    output[l-1] = k;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;

  cin >> n >> m;

  int *output = new int[n];

  for (int i = 0; i < m; i++) {
    func1(output);
  }

  for (int i = 0; i < n; i++) {
    cout << output[i] << ' ';
  }

  delete[] output;
}