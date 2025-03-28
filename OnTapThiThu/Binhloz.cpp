#include<iostream>
using namespace std;
// tất cả các thùng còn bằng nhau 
// muốn lấy ra thì làm gì ? 
// lấy ra bằng số nhỏ nhất.
int main (){
    int n,m;
    cin >> n >> m; 
    int a[n][m];
    int count = 0;

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int sum = a[0][0];
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            if ( a[i][j] <= sum) sum = a[i][j];
        }
    }

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            if (a[i][j] > sum ){
                count += a[i][j] - sum; 
            }
            
        }
    }
    cout << count;

}