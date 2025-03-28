#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    char a[n];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;

    // làm sao để máy hiểu đó là 1 chữ cái ? 
    // chữ cái in hoa hay thường gì cũng là 1 chữ cái.
    // chuyển nó về in hoa hết 
    // xem thằng nào băng nhau thì trừ ra 
    
    // biến thành in hoa
    for ( int i = 0; i < n; i++){
        if ( a[i] >= 'a' && a[i] <= 'z'){
            a[i] -= 32;
        }
    }

bool present[26] = {false};
for (int i = 0; i < n; i++) {
    if (a[i] >= 'A' && a[i] <= 'Z') {
        present[a[i] - 'A'] = true;
    }
}
    for ( int i = 0; i < 26; i++){
        if ( !present[i] ) count++;
    }

    cout << count;
}