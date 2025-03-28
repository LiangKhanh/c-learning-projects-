#include<bits/stdc++.h>
using namespace std;

int main (){
    string a[1000];
    int count = 0;
    for (int i = 0; i <1000; i++){
        cin >> a[i];
        count++;
        if (a[i] == ".") break;
    }
    // tìm chuỗi dài nhất. 
    int maxx = 0;
    for ( int i = 0; i < count; i++ ){
        int max = 0;
        for ( int j = 0; j < a[i].size(); j++){
            max +=1;
            if ( max > maxx){
                maxx = max;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        if ( a[i] == ".") break;
        cout << setw(maxx) << a[i] << endl;
    }
}