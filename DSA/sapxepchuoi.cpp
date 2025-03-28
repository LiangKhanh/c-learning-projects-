#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
    char s[100];
    cin.getline (s,100);
    for ( ll i = 1; s[i] != '\0';i++){
        char c = s[i];
        int j = i - 1;
        while (j >= 0 && s[j] > c ){
            s[j+1] = s[j];
            j = j -1 ;
    
        }
        s[j+1] = c;
        }
    for ( ll i = 0; s[i] != '\0';i++){
        cout << s[i];
    }

}