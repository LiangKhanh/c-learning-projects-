#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    vector <string> a;
    string line;
    // nhập phần tử mà không biết trước số phần từ
    while (true){
        getline (cin, line);
        if ( line.empty()) break;
        a.push_back(line);
    }
    // có bao nhiêu chỗ mà ghép thành từ được 
    // ghép các ký tự khác khoảng trắng lại.
    for ( int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    return 0;
}