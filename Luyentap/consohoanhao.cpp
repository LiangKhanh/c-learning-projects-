#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    vector<string> a;
    string line;
    while (true) {
        getline(cin, line);// nhập dữ liệu vào biến line
        if (line.empty()) break;
        a.push_back(line);
    }

    // Duyệt qua các phần tử của vector bằng vòng lặp for với chỉ số
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++){
            if (a[i][j] == a[i][a[i].size()-1]){
                cout << "YES";
                break;
            }
            else{
                cout <<"NO";
                break;
            }
        }
        cout << endl;
    }

    return 0;
}