// 공 바꾸기
// Created by 황승준 on 2025. 1. 30..
//

#include <iostream>
#include <vector>

using namespace std;

int n, m;

void func1(vector<int>& v) {
  int n1, n2;

  cin >> n1 >> n2;

  swap(v.at(n1- 1), v.at(n2 - 1));
}

int main() {

  cin >> n >> m;

  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    v[i] = i + 1;
  }

  for (int i = 0; i < m; i++) {
    func1(v);
  }

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
}
