// 개미
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void moveLeftV(vector<char> &v1, vector<char> &v2, vector<char> &v3, int t) {
    int v1Size = v1.size();
    int v2Size = v2.size();
    for (int i = 0; i < v1Size; i++) {
        int movingStartSpot = v1Size - i;
        int movingEndSpot = v2Size + movingStartSpot - 1;

        int movingCount = t;
        if (t < movingStartSpot) {
            movingCount = 0;
        } else if (t > movingEndSpot) {
            movingCount = movingEndSpot - movingStartSpot + 1;
        } else {
            movingCount = t - movingStartSpot + 1;
        }

        v3[i + movingCount] = v1.at(i);
    }
}

void moveRightV(vector<char> &v2, vector<char> &v3) {
    int i = 0;
    for (int j = 0; j < v3.size(); j++) {
        if (v3.at(j) == 0) {
            v3[j] = v2.at(i);
            i++;
        }
    }
}

vector<char> func1(vector<char> &v1, vector<char> &v2, int t) {
    reverse(v1.begin(), v1.end());
    vector<char> v3(v1.size() + v2.size(), 0);

    moveLeftV(v1, v2, v3, t);
    moveRightV(v2, v3);

    return v3;


}

void scanVector(vector<char> &v) {
  for (int i = 0; i < v.size(); i++) {
      cin >> v[i];
  }
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, t;

    cin >> n >> m;

    vector<char> array1(n), array2(m);

    scanVector(array1);
    scanVector(array2);

    cin >> t;

    vector<char> v3 = func1(array1, array2, t);

    for (char i: v3) {
        cout << i;
    }
}