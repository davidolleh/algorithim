// 윷놀이
#include <iostream>


using namespace std;

int main() {
    int arr[3][4];

    for (int i =0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
                if (arr[i][j] == 0) {
                    cnt++;
                }
        }
        if (cnt == 0) {
            cout << "E" << endl;
        } else if (cnt == 1) {
            cout << "A" << endl;
        } else if (cnt == 2) {
            cout << "B" << endl;
        } else if (cnt == 3) {
            cout << "C" << endl;
        } else {
            cout << "D" << endl;
        }

        cnt = 0;
    }
}

