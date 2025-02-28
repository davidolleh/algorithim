// 킹, 퀸, 룩, 비숍, 나이트, 폰
#include <iostream>

using namespace std;

int main() {
    int cC[6] {1, 1, 2, 2, 2, 8};

    int n;

    for (int c: cC) {
      cin >> n;

      cout << c - n << ' ';
    }
}