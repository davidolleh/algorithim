//세로읽기
#include<iostream>
#include <string>

using namespace std;

char matrix[5][15];

int main() {
    string input[5];

    for (int i = 0; i < 5; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < input[j].size()) {
                cout << input[j][i];
            }
        }
    }
}