// 과제 안내신 분?
// Created by 황승준 on 2025. 1. 31..
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v(30);

    for (int i = 0; i < 30; i++) {
        v[i] = i + 1;
    }

    int n;

    for (int i = 0; i < 28; i++) {
        cin >> n;

        v[n-1] = NULL;
    }

    for (auto i: v) {
        if (i != NULL) {
            cout << i << "\n";
        }
    }
}