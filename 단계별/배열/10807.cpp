// 개수 세기
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, findNumber, cnt(0);

    cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; i++) {
      cin >> array[i];
    }

    cin >> findNumber;

    for (int i = 0; i < n; i++) {
      if (findNumber == array[i]) {
        cnt++;
      }
    }

    cout << cnt;

    delete[] array;
}