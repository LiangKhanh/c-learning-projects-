#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long k;
    cin >> k;
        
    if (k>0) {
        double b = k/10.0;
        int c = k/10;
        double d = (b-c)*10.0;
        int m = round (d);
    
    if (m == 0) cout << "CANH" << " ";
    if (m == 1) cout << "TAN"<< " ";
    if (m == 2) cout << "NHAM"<< " ";
    if (m == 3) cout << "QUY" << " ";
    if (m == 4) cout << "GIAP"<< " ";
    if (m == 5) cout << "AT" << " " ;
    if (m == 6) cout << "BINH" << " ";
    if (m == 7) cout << "DINH"<< " ";
    if (m == 8) cout << "MAU" << " ";
    if (m == 9) cout << "KY" <<" ";
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
    long long h = k*-1;
    double g = h/10.0;
    int f = h/10;
    double e = (g-f)*10.0;
    int n = round (e);
    if (n==0) cout << "TAN" << " ";
    if (n==1) cout << "CANH" << " ";
    if (n==2) cout << "KY" << " ";
    if (n==3) cout << "MAU" << " ";
    if (n==4) cout << "DINH" << " ";
    if (n==5) cout << "BINH" << " ";
    if (n==6) cout << "AT" << " ";
    if (n==7) cout << "GIAP" << " ";
    if (n==8) cout << "QUY" << " ";
    if (n==9) cout << "NHAM" << " ";
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