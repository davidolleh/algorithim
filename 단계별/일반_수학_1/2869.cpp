// 달팽이는 올라가고 싶다
#include <iostream>

using namespace std;

int afterDay(int startH, int &A, int &B, int &V) {
  if (startH + A >= V) {
    return startH + A;
  }

  return startH + A - B;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int A, B, V;

  cin >> A >> B >> V;

  int dayMove = A - B;
  int lastH = V - A;

  int dCount = lastH / dayMove;
  lastH = lastH - lastH % dayMove;

  while (lastH < V) {
    lastH = afterDay(lastH, A, B, V);
    dCount++;
  }

  cout << dCount << endl;

  return 0;
}
