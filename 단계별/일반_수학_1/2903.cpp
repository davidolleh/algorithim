// 중앙 이동 알고리즘
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int lineCount = 1;

  for (int i = 0; i < n;  i++) {
    lineCount *= 2;
  }

  cout << (lineCount + 1) * (lineCount + 1) << endl;

  return 0;
}
