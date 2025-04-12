// 약수 구하기
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


using namespace std;

int findD(int n, int m) {
    vector<int> s;

    for (int i = 1; i <= sqrt(n); i++) {
      if (n % i == 0) {
        s.push_back(i);

        if (i != n / i) {
          s.push_back(n / i);
        }
      }
    }

    sort(s.begin(), s.end());

    if (s.size() <  m) {
      return 0;
    }

    return s.at(m - 1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;

  cin >> n >> m;

  int t = findD(n, m);

  cout << t << endl;

  return 0;
}
