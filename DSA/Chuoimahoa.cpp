#include<bits/stdc++.h> 
using namespace std;

string tos(long long n){
    string s = "";
    while ( n >0){
        s += char ( n%10 + '0' );
        n /= 10;
    }
    return s;
}

int main (){
    string s;
    getline(cin, s);
    s += "@";
    string str ="";
    stack <char> st;
    for ( long long i = 0; i < s.size(); i++){
        if ( st.empty() || st.top() == s[i]){
            st.push(s[i]);
        }
        else{
            int count = 0;
            str = str + st.top();
            while (!st.empty()){
                count++;
                st.pop();
            }
            str += tos(count);
            st.push(s[i]);
        }
    }
    cout << str;
}