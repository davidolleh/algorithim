// 색종이
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    bool paper[100][100] = {0};

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                if (paper[j][k] == 1) continue;
                paper[j][k] = 1;
                sum++;
            }
        }
    }

    cout << sum;

    return 0;
}
