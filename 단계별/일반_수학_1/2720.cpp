// 2720
#include <iostream>

using namespace std;

const int quater = 25;
const int dime = 10;
const int nickel = 5;
const int penny = 1;

void showResultMoney(int &arr) {
  const int q = arr / quater;
  arr = arr % quater;
  const int d = arr / dime;
  arr = arr % dime;
  const int n = arr / nickel;
  arr = arr % nickel;
  const int p = arr / penny;

  cout << q << " " << d << " " << n << " " << p << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (auto a : arr) {
    showResultMoney(a);
  }

}
