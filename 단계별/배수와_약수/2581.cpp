// 소수
#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

bool isSosu(int &n) {
  if (n == 1) return false;

  for (int i = 2;  i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

pair<int, int> getSum(int &n, int &m) {
  pair<int, int> p(0, -1);

  for (int i = m; i >= n; i--) {
    if (isSosu(i)) {
      p.first += i;
      p.second = i;
    }
  }
  return p;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;

  cin >> n >> m;

  pair<int, int> sol = getSum(n, m);

  if (sol.second != -1) {
    cout << sol.first << endl;
    cout << sol.second << endl;
    return 0;
  }

  cout << sol.second << endl;

  return 0;
}
