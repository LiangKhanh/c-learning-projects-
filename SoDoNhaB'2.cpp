#include <iostream> 
using namespace std; 


int main () {
    int sotang_n = 8;
    int tanghientai = 3;
    int phonghientai = 12;
    int tangduoicung = (sotang_n - (sotang_n-1));
    int sophongtangduoicung = sotang_n + 2;
    int sophongtanghientai = sophongtangduoicung - tanghientai;
    int tangtren;
    int phongtren;
    int tangduoi;
    int phongduoi;
    int ngangtrai;
    int phongtrai;
    int ngangphai;
    int phongphai;

    if (tanghientai==sotang_n){
    tangtren = -1;
    (phongtren) = -1;

    tangduoi = tanghientai - 1;
    phongduoi = phonghientai + 2 ;

    ngangphai = tanghientai;
    phongphai = phonghientai - 2;
        if (phongphai < sophongtanghientai*2 ) { 
            ngangphai = phongphai = -1;
            }
    ngangtrai = tanghientai; 
    phongtrai = phonghientai + 2;
        if (phongtrai > sophongtanghientai*2 ) {
            ingangtrai = phongtrai = -1;
        }

}
if (tanghientai==tangduoicung){
    tangtren = tanghientai + 1;
    phongtren = phonghientai - 2;

    tangduoi = phongduoi = -1;


    ngangphai = tanghientai;
    phongphai = phonghientai - 2;
        if (phongphai < sophongtanghientai*2 ) { 
            int ngangphai = phongphai = -1;
            }
    ngangtrai = tanghientai; 
    phongtrai = phonghientai + 2;
        if (phongtrai > sophongtanghientai*2 ) {
        int ngangtrai = phongtrai = -1;
        }
    

}
if (tangduoicung < tanghientai < sotang_n) {
    tangtren = tanghientai + 1;
    phongtren = phonghientai - 2;

    tangduoi = tanghientai - 1;
    phongduoi = phonghientai + 2; 

    ngangphai = tanghientai;
    phongphai = phonghientai - 2;
        if (phongphai < sophongtanghientai*2 ) { 
            int ngangphai = phongphai = -1;
            }
    ngangtrai = tanghientai; 
    phongtrai = phonghientai + 2;
        if (phongtrai > sophongtanghientai*2 ) {
        int ngangtrai = phongtrai = -1;
        }
}
cout << tangtren << " " << phongtren << endl;
cout << ngangphai << " " << phongphai << endl;
cout << tangduoi << " " << phongduoi << endl;
cout << ngangtrai << " " << phongtrai << endl;

    return 0;

}