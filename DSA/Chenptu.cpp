/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

using namespace std;
#define MAXN 150000

void NhapMang(int A[], const int N) {
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}
//###INSERT CODE HERE -

int BinarySearch (int x, int*a, int n){
    int mid = 0;
    int left = 0;
    int right = n - 1;
    // left <= right là điều kiện chạy của binary search. nó sẽ chạy đến khi L,R bằng nhau là dừng.
    while ( left <= right ){
        mid = ( left + right)/2;
        if (a[mid]==x){
            right = mid -1;
        }
        else if (a[mid]>x){
            right = mid -1;
        }
        else {
            left = mid + 1;
        }
    }
    return left;
}

void DichPhai(int* a, int &n, int k){
    n++;
    for ( int i = n; i > k; i--){
         a[i] = a[i-1];
    }
}

void ChenTang_BinarySearch(int x, int *a, int &n){
    //vị trí lớn hơn số lớn nhất nhưng nhỏ hơn x.
    int k=BinarySearch(x, a, n); // k là vị trí thích hợp để chèn x để đảm bảo mảng a vẫn tăng dần sau khi chèn
    DichPhai(a, n, k); // Di chuyển các giá trị mảng a sang phải 1 đơn vị bắt đầu từ vị trí k
    a[k]=x;
}
void XuatMang(int A[], const int N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main() {
    int a[MAXN];
    int x; cin >> x;
    int n; cin >> n;

    NhapMang(a, n);

    ChenTang_BinarySearch(x, a, n);

    XuatMang(a, n);

    return 0;
}

