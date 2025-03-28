/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
#include <bits/stdc++.h>
#define MAXN 200000
using namespace std;

void NhapMang(int *a, int &n){
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void XuatMang(int A[], const int &N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}
void merge(int a[], int l, int m, int r) {
    std::vector<int> x(a + l, a + m + 1);
    std::vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while (i < x.size() && j < y.size()) {
        if (x[i] <= y[j]) {
            a[l] = x[i];
            i++; l++;
        } else {
            a[l] = y[j];
            j++; l++;
        }
    }
    while (i < x.size()) {
        a[l] = x[i];
        i++; l++;
    }
    while (j < y.size()) {
        a[l] = y[j];
        j++; l++;
    }
}

void MergeSort ( int a[], int n ){
    for ( int k = 1; k < n; k*=2){
        for ( int i = 0; i < n; i= i+2*k){
            merge(a,i,i+k-1,i+2*k-1);
        }
    }
}

int main() {
    int n, a[MAXN];
    NhapMang(a, n);

    MergeSort(a, n);

    XuatMang(a, n);

    return 0;
}
