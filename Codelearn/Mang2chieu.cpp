#include<iostream>

using namespace std;

int main() {
	int n,m;
    cin >> n >> m;
    int *arr = new int [n * m];
    for (int i = 0; i < n*m ;i++){
           cin >> arr[i];
        }
    int index = 0;
    for (int i = 0; i < n ;i++){
        int sum = 0;
        for ( int j = 0; j < m; j++){
           sum += arr[index];
           index++;
        }
        cout << sum << endl;
    }

    delete [] arr;

	return 0;
}