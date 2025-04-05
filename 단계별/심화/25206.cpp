// 너의 평점은
#include <iostream>
#include <sstream>

using namespace std;

double gradeMapper(const string &grade) {
    if (grade == "A+") return 4.5;
    else if (grade == "A0") return 4.0;
    else if (grade == "B+") return 3.5;
    else if (grade == "B0") return 3.0;
    else if (grade == "C+") return 2.5;
    else if (grade == "C0") return 2.0;
    else if (grade == "D+") return 1.5;
    else if (grade == "D0") return 1.0;
    else return 0.0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s[20];

    double totalCredit = 0.0;
    double totalGrade = 0.0;

    for (int i = 0; i < 20; i++) {
        getline(cin, s[i]);

        stringstream sArr(s[i]);

        string name, credit, grade;

        sArr >> name >> credit >> grade;
        // cout << endl;
        if (grade != "P") {
            double creditD = stod(credit);
            totalCredit +=  creditD;

            double gradeD = gradeMapper(grade);

            double score = gradeD * creditD;

            // cout << creditD << " " << gradeD << " " << score << endl;

            totalGrade += score;
        }
    }


    cout << totalGrade / totalCredit << endl;

    return 0;
}