#include <iostream> 
using namespace std; 


int main () {
    int sotang_n;
    int tanghientai;
    int phonghientai;
    cin >> sotang_n >> tanghientai >> phonghientai;
    if (sotang_n <= 0 || tanghientai <= 0 || phonghientai <= 0) {
        cout << "-1" << endl;
        }
    if (phonghientai % 2 != 0 || tanghientai > sotang_n) {
    cout << "-1";
    }
    int tangduoicung = (sotang_n - (sotang_n-1));
    int sophongtangduoicung = sotang_n + 2;
    int sophongtanghientai = sophongtangduoicung - (tanghientai-1);
    int tangtren;
    int phongtren;
    int tangduoi;
    int phongduoi;
    int ngangtrai;
    int phongtrai;
    int ngangphai;
    int phongphai;
if (sotang_n>1) {
if (phonghientai % 2 == 0 && phonghientai > 2) {
    if (tanghientai==sotang_n){
    tangtren = phongtren = -1;
    cout << tangtren << endl;

    ngangphai = tanghientai;
    phongphai = phonghientai - 2;
        if (phongphai > sophongtanghientai*2 ) { 
            ngangphai = phongphai = -1;
            cout << ngangphai << endl;
            }
            else cout << ngangphai << " " << phongphai << endl;
    tangduoi = tanghientai - 1;
    phongduoi = phonghientai + 2 ;
    cout << tangduoi << " " << phongduoi << endl;

    ngangtrai = tanghientai; 
    phongtrai = phonghientai + 2;
        if (phongtrai > sophongtanghientai*2 ) {
            ngangtrai = phongtrai = -1;
            cout << ngangtrai << endl;
        }
        else cout << ngangtrai << " " << phongtrai << endl;

}
    else if (tanghientai==tangduoicung){
    tangtren = tanghientai + 1;
    phongtren = phonghientai - 2;
    cout << tangtren << " " << phongtren << endl;

    ngangphai = tanghientai;
    phongphai = phonghientai - 2;
        if (phongphai > sophongtanghientai*2 ) { 
            ngangphai = phongphai = -1;
            cout << ngangphai << endl;
            }
        else cout << ngangphai << " " << phongphai << endl;

    tangduoi = phongduoi = -1;
    cout << tangduoi << endl;

    ngangtrai = tanghientai; 
    phongtrai = phonghientai + 2;
        if (phongtrai > sophongtanghientai*2 ) {
        ngangtrai = phongtrai = -1;
            cout << ngangtrai << endl;
        }
        else cout << ngangtrai << " " << phongtrai << endl;
    

}
else {
    tangtren = tanghientai + 1;
    phongtren = phonghientai - 2;
    cout << tangtren << " " << phongtren << endl;

    ngangphai = tanghientai;
    phongphai = phonghientai - 2;
        if (phongphai > sophongtanghientai*2 ) { 
            ngangphai = phongphai = -1;
            cout << ngangphai << endl;
            }
        else cout << ngangphai << " " << phongphai << endl;

    tangduoi = tanghientai - 1;
    phongduoi = phonghientai + 2;
    cout << tangduoi << " " << phongduoi << endl; 


    ngangtrai = tanghientai; 
    phongtrai = phonghientai + 2;
    if (phongtrai > sophongtanghientai*2 ) {
        ngangtrai = phongtrai = -1;
        cout << ngangtrai << endl;
        }
    else cout << ngangtrai <<" " << phongtrai << endl;

}
    }
    if (phonghientai % 2 == 0 && phonghientai == 2 ) {
        if (tanghientai == tangduoicung) {
        tangtren = phongtren = - 1;
        cout << tangtren << endl;
        ngangphai = phongphai = -1;
        cout << ngangphai << endl;
        tangduoi = phongduoi = -1;
        cout << tangduoi << endl;
        ngangtrai = tanghientai;
        phongtrai = phonghientai + 2;
        cout << ngangtrai << " " << phongtrai << endl;
        }

        else {
        tangtren = phongtren = - 1;
        cout << tangtren << endl;
        ngangphai = phongphai = -1;
        cout << ngangphai << endl;
        tangduoi = tanghientai - 1;
        phongduoi = phonghientai + 2;
        cout << tangduoi << " " << phongduoi << endl;
        ngangtrai = tanghientai;
        phongtrai = phonghientai + 2;
        cout << ngangtrai << " " << phongtrai << endl;
        }
    }
}
if (sotang_n == 1){

    if (phonghientai % 2 == 0 && phonghientai > 2 ) {
        tangtren = phongtren = -1;
        cout << tangtren <<endl;
        ngangphai = tanghientai;
        phongphai = phonghientai - 2; 
        if (phongphai > sophongtanghientai*2){
            ngangphai = phongphai = -1;
            cout << ngangphai << endl;
        } else cout << ngangphai << " " << phongphai << endl;
    tangduoi = phongduoi = -1;
    cout << tangduoi << endl;

    ngangtrai = tanghientai;
    phongtrai = phonghientai + 2;
        if (phongtrai > sophongtanghientai*2) {
            ngangtrai = phongtrai = -1;
            cout << ngangtrai << endl; 
        }else cout << ngangtrai << " " << phongtrai << endl; }

    else if (phonghientai % 2 == 0 && phonghientai == 2){
        tangtren = phongtren = -1;
        cout << tangtren <<endl;
        ngangphai = phongphai = -1; 
        cout << ngangphai << endl;
        tangduoi = phongduoi = -1;
        cout << tangduoi << endl;
        ngangtrai = tanghientai;
        phongtrai = phonghientai + 2; 
        cout << ngangtrai << " " << phongtrai << endl;
    }

}

    return 0;

}