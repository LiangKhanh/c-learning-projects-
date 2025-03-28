    #include <bits/stdc++.h>
    #define ll long long 
    using namespace std;

    int main (){
        ll n; 
        cin >> n;
        ll a[n];
        for ( ll i = 0; i<n; i++){
            cin >> a[i];
        }
        // xếp các số lớn nhất lại ở đầu 
        // sắp xếp mảng từ lớn tới bé;
        // nhân 3 số đầu lại;
        for ( ll i = 0; i<n; i++){
            for ( ll j = i + 1; j < n; j++){
                ll temp = a[i];
                ll temp2 = a[j];
                if (temp2 < temp){
                    a[i] = temp2;
                    a[j] = temp;
                }
            }
        }
        ll max = -100000000;
        ll n1=0, n2=0,n3=0;
        for ( ll i = 1; i < n; i++){
            for ( ll j = i + 1; j<n; j++){
                if ( a[i]*a[i-1]*a[j] > max){
                    max = a[i]*a[i-1]*a[j];
                    n1 = a[i-1];
                    n2 = a[i];
                    n3 = a[j];
                }
            }
        }
        cout << max;

        return 0;
    }