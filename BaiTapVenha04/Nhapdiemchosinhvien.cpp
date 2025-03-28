#include <iostream>
#include <cmath>
using namespace std;


bool checkSum(const double diem[], const int he_so[], int n, double diem_trung_binh) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += diem[i] * (he_so[i] / 100.0);
    }
    return round(sum * 10) / 10 == diem_trung_binh;
}


void findScores(double diem[], const int he_so[], int n, double diem_trung_binh, int index) {
    if (index == n) {
        if (checkSum(diem, he_so, n, diem_trung_binh)) {
            for (int i = 0; i < n; i++) {
                cout << diem[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    for (double score = 0.25; score <= 10; score += 0.25) { 
        diem[index] = score;
        findScores(diem, he_so, n, diem_trung_binh, index + 1);
    }
}

int main() {
    int n;
    cin >> n;

    int he_so[n];
    for (int i = 0; i < n; i++) {
        cin >> he_so[i];
    }

    double diem_trung_binh;
    cin >> diem_trung_binh;

    double diem[n] = {0};
    findScores(diem, he_so, n, diem_trung_binh, 0);

    return 0;
}