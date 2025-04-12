// 배수와 약수
#include <iostream>

using namespace std;

const string mul = "multiple";
const string fac = "factor";
const string nei = "neither";

void compareNumbers(int &n, int &m) {
  if (n > m) {
    if (n % m == 0) {
      cout << mul << endl;
      return;
    }

    cout << nei << endl;
    return;
  }

  if (m % n == 0) {
    cout << fac << endl;
    return;
  }

  cout << nei << endl;
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;

  while (true) {
    cin >> n >> m;

    if (n == 0 && m == 0) break;

    compareNumbers(n, m);
  }

  return 0;
}
