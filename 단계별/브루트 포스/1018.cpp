// 체스판 다시 칠하기
#include <iostream>
#include <vector>

using namespace std;

const int W = 8;
const int H = 8;

char changeColor(char currC) {
  if (currC == 'W')
    return 'B';
  return 'W';
}

int notChangeStartColor(vector<vector<char>> v, int startX, int startY) {
  int cnt = 0;

  for (int j = startX + 1; j < startX + W; j++) {
    char prevC = v[startY][j - 1];
    char currC = v[startY][j];
    if (prevC == currC) {
      cnt++;
      v[startY][j] = changeColor(currC);
    }
  }

  for (int i = startY + 1; i < startY +W; i++) {
    for (int j = startX; j < startX + H; j++) {
      char prevC = v[i - 1][j];
      char currC = v[i][j];
      if (prevC == currC) {
        cnt++;
        v[i][j] = changeColor(currC);
      }
    }
  }
  return cnt;
}

int changeStartColor(vector<vector<char>> v, int startX, int startY) {
  int cnt = 1;

  v[startY][startX] = changeColor(v[startY][startX]);

  for (int j = startX + 1; j < startX + W; j++) {
    char prevC = v[startY][j - 1];
    char currC = v[startY][j];
    if (prevC == currC) {
      cnt++;
      v[startY][j] = changeColor(currC);
    }
  }

  for (int i = startY + 1; i < startY +W; i++) {
    for (int j = startX; j < startX + H; j++) {
      char prevC = v[i - 1][j];
      char currC = v[i][j];
      if (prevC == currC) {
        cnt++;
        v[i][j] = changeColor(currC);
      }
    }
  }
  return cnt;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int w, h;
  cin >> h >> w;

  vector<vector<char>> v(h, vector<char>(w));

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> v[i][j];
    }
  }

  int minChange = w * h;

  for (int i = 0; i <= h - 8; i++) {
    for (int j = 0; j <= w - 8; j++) {
      int notC = notChangeStartColor(v, j, i);
      int C = changeStartColor(v, j, i);

      if (minChange > C || minChange > notC) {
        minChange = min(C, notC);
      }
    }
  }

  cout << minChange << endl;

  return 0;

}
