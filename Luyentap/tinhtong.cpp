    #include<bits/stdc++.h>
    #define ll long long 
    using namespace std;

    // int tong (unsigned int n){
    //     if ( n == 1 ) return 1;
    //     else if (n > 0) return n*n + tong (n-1);
    // }

    int main (){
        unsigned int n;
        cin >> n;
        ll sum = 0;
        while ( n > 0 ){
            sum += pow(n,2);
            n--;
        }   
        cout << sum;
    }