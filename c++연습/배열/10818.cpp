// 최소, 최대
#include <iostream>
#include <vector>

using namespace std;

int n;
int maxIndex(0), minIndex(0);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    if (v[i] > v[maxIndex]) {
      maxIndex = i;
    }

    if (v[i] < v[minIndex]) {
      minIndex = i;
    }
  }

  cout << v[minIndex] << ' ' << v[maxIndex];
}
