#include <iostream>

using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  int **a = new int*[n];
  int **b = new int*[n];

  for (int i = 0; i < n; i++) {
    a[i] = new int[m];
    b[i] = new int[m];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> b[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << a[i][j] + b[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    delete[] a[i];
    delete[] b[i];
  }

  delete[] a;
  delete[] b;

  return 0;
}
