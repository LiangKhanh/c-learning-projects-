/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
#include <climits>
#include <bits/stdc++.h>
#define MAXN 150000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
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

void merge_2_Sorted_subArray(int a[], int l, int middle, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    merge_2_Sorted_subArray(a, l, (l + m) / 2, m);
    merge_2_Sorted_subArray(a, m + 1, (m + 1 + r) / 2, r);
    merge(a, l, m, r);
}

void XuatMang(int A[], const int &N) {
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main() {
    int a[MAXN], n;

    NhapMang(a, n);

    int l = 0, r = n - 1, middle = (l + r) / 2;
    merge_2_Sorted_subArray(a, l, middle, r);

    XuatMang(a, n);

    return 0;
}