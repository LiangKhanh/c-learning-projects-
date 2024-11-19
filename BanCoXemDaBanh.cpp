#include <iostream>
using namespace std;

int tinhDiem(int arr[3][3]) {
    int t = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            if (arr[i][j] > arr[i][j + 1]) {
                t = t + 3;
            }
            else if (arr[i][j] == arr[i][j + 1]) {
                t = t + 1;
            }
            else if (arr[i][j] < arr[i][j + 1]) {
                t = t - 1;
            }
        }
    }
    return t;
}
int HieuSoBanThang(int arr[3][3]) {
    int s = 0;
    for (int i = 0; i < 3; i++) {
            s = s + (arr[i][0] - arr[i][1]); 
        }

    return s;
}
int SoBanThang (int arr[3][3]) {
    int k = 0;
    for (int i = 0; i < 3; i++) {
            k = k + (arr[i][0]);
        }
        return k;
    }
int FairPlay(int arr[3][3]) {
    int b = 0;
    for (int i = 0; i < 3; i++) {
            b = b + (arr[i][2]) ;
            
        }
        return b;
    }
    
    


int main() {
    int arr1[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr1[i][j];
        }
    }

    int arr2[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr2[i][j];
        }
    }
    int diem1 = tinhDiem(arr1);
    int diem2 = tinhDiem(arr2);
    int hieu1 = HieuSoBanThang(arr1);
    int hieu2 = HieuSoBanThang(arr2);
    int soBanThang1 = SoBanThang(arr1);
    int soBanThang2 = SoBanThang(arr2);
    int fairPlay1 = FairPlay(arr1);
    int fairPlay2 = FairPlay(arr2);
    if (diem1 != diem2) {
        if (diem1 > diem2) {
        cout << diem1 << " " << hieu1 << " " << soBanThang1 << " " << fairPlay1;
        }
    else if (diem1 < diem2) {
        cout << diem2 << " " << hieu2 << " " << soBanThang2 << " " << fairPlay2;
        }
    }

    else if (diem1 == diem2) {
        if (hieu1 != hieu2) {
            if (hieu1 > hieu2) {
                cout << diem1 << " " << hieu1 << " " << soBanThang1 << " " << fairPlay1;
                }
                else if (hieu1 < hieu2) {
                    cout << diem2 << " " << hieu2 << " " << soBanThang2 << " " << fairPlay2;
                    }
                }
                    else if (hieu1 == hieu2) {
                        if (soBanThang1 > soBanThang2) {
                            cout << diem1 << " " << hieu1 << " " << soBanThang1 << " " << fairPlay1;
                        }
                        else if (soBanThang1 < soBanThang2) {
                            cout << diem2 << " " << hieu2 << " " << soBanThang2 << " " << fairPlay2;
                            }   
                            else if (soBanThang1 == soBanThang2) {
                                if (fairPlay1 < fairPlay2) {
                                    cout << diem1 << " " << hieu1 << " " << soBanThang1 << " " << fairPlay1;
                                    }
                                else if (fairPlay1 > fairPlay2) {
                                    cout << diem2 << " " << hieu2 << " " << soBanThang2 << " " << fairPlay2;
                                    }
                            }
                    }
                }
    return 0;
}