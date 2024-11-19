#include <iostream>
using namespace std;

int main() {
    long long k;
    cin >> k;
    if (k>0) {
        if (k%12==0) {
        cout << "THAN";
    }
        if (k%12==1) {
        cout << "DAU";
    }
        if (k%12==2) {
        cout << "TUAT";
    }
        if (k%12==3) {
        cout << "HOI";
    }
        if (k%12==4) {
        cout << "TY'";
    }
        if (k%12==5) {
        cout << "SUU";
    }
        if (k%12==6) {
        cout << "DAN";
    }
        if (k%12==7) {
        cout << "MEO";
    }
        if (k%12==8) {
        cout << "THIN";
    }
        if (k%12==9) {
        cout << "TY.";
    }
        if (k%12==10) {
        cout << "NGO";
    }
        if (k%12==11) {
        cout << "MUI";
    }
    } if (k<0) {
    long long j = k*-1;
    if (j%12==0) {
        cout << "DAU";
    }
    if (j%12==1) {
        cout << "THAN";
    }
    if (j%12==2) {
        cout << "MUI";
    }
    if (j%12==3) {
        cout << "NGO";
    }
    if (j%12==4) {
        cout << "TY.";
    }
    if (j%12==5) {
        cout << "THIN";
    }
    if (j%12==6) {
        cout << "MEO";
    }
    if (j%12==7) {
        cout << "DAN";
    }
    if (j%12==8) {
        cout << "SUU";
    }
    if (j%12==9) {
        cout << "TY'";
    }
    if (j%12==10) {
        cout << "HOI";
    }
    if (j%12==11) {
        cout << "TUAT";
    }
    }
    
    return 0;
}