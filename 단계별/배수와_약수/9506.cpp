// 약수들의 합
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

string findN(int &n) {
  vector<int> v1;
  for (int i = 1; i < sqrt(n); i++) {
    if (n % i == 0) {
      v1.push_back(i);

      if (i != n/i && n/i != n) {
        v1.push_back(n/i);
      }
    }
  }
  sort(v1.begin(), v1.end());

  int sum = 0;
  string s = to_string(n)+ " = ";
  for (int i = 0; i < v1.size(); i++) {
    sum += v1.at(i);
    if (i == v1.size() - 1) {
      s += to_string(v1.at(i));
      continue;
    }
    s += to_string(v1.at(i)) + " + ";
  }

  if (sum == n) {
    return s;
  }

  return to_string(n) + " is NOT perfect.";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  vector<string> v;

  while (true) {
    cin >> n;

    if (n == -1) break;

    const string s = findN(n);

    v.push_back(s);
  }

  for(auto s: v) {
    cout << s << endl;
  }

  return 0;
}
