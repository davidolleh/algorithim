// 수학은 비대면 강의 입니다.
#include <iostream>

using namespace std;

void solveMath(int a, int b, int c, int d, int e, int f) {
  if (a == 0 || d == 0) {
    int newA = a * e;
    int newB = b * e;
    int newC = c * e;
    int newD = d * b;
    int newE = e * b;
    int newF = f * b;

    int x = (newC - newF) / (newA - newD);
    int y = (c - a * x) / b;

    cout << x << " " << y << endl;
    return;
  }

  int newA = a * d;
  int newB = b * d;
  int newC = c * d;
  int newD = d * a;
  int newE = e * a;
  int newF = f * a;

  int y = (newC - newF) / (newB - newE);
  int x = (c - b * y) / a;

  cout << x << " " << y << endl;
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c, d, e, f;

  cin >> a >> b >> c >> d >> e >> f;

  solveMath(a, b, c, d, e, f);

  return 0;
}
