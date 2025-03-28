#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    vector<long long> temp;
    string input;
    getline(cin, input);

    stringstream ss(input);
    long long number;
    while (ss >> number) {
        temp.push_back(number);
    }

    long long n = temp.size();
    long long* arr = new long long[n];
    for (long long i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    long long x = 0;
    long long y = 0;
    long long buoc1 = 0, huong1 = 0, buoc2 = 0, huong2 = 0;

    for (long long i = 0; i < n; i+=2) {
        long long j = i + 1;
        if (j < n && arr[j] == -1) {
            y = y + arr[i];
        } else if (j < n && arr[j] == -3) {
            y = y + (arr[i] * (arr[j] / 3));
        }
        if (j < n && arr[j] == -4) {
            x = x + arr[i];
        } else if (j < n && arr[j] == -2) {
            x = x + (arr[i] * (arr[j] / 2));
        }
    }
//hướng đông bắc 
    if (x > 0 && y > 0) {
        buoc1 = y;
        huong1 = -1;
        buoc2 = x;
        huong2 = -4;
    }
//hướng đông nam 
    if (x > 0 && y < 0) {
        buoc1 = -y;
        huong1 = -3;
        buoc2 = x;
        huong2 = -4;
    }
//hướng tây nam 
    if (x < 0 && y < 0) {
        buoc1 = -y;
        huong1 = -3;
        buoc2 = -x;
        huong2 = -2;
    }
//hướng tây bắc
    if (x < 0 && y > 0) {
        buoc1 = y;
        huong1 = -1;
        buoc2 = -x;
        huong2 = -2;
    }

    delete[] arr;
    cout << buoc1 << " " << huong1 << " " << buoc2 << " " << huong2;
    return 0;
}