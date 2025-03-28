#include<bits/stdc++.h> 
#define ll long long
using namespace std;

bool isprime ( ll n){
    if ( n <= 1 ) return false;
    if ( n <= 3 ) return true;
    if ( n % 2 == 0 || n % 3 == 0) return false;
    for ( ll i = 5; i*i <= n; i += 6){
        if ( n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Queue ( FIRST IN FIRST OUT )
// Stack ( LAST IN FIRST OUT )
// Cả hai danh mục này 2 mục đầu là đánh dấu cho phần tử nào ra trước.
int main (){
    ll n; 
    cin >> n; 
    clock_t begin = clock(); //ghi lại thời gian đầu
    queue < ll > q;
    for ( ll i = 1; i <= n; i++){
        //số lớn hơn 2 chữ số.
        if(( i/10 > 0)){    
            if ( isprime (i)){
                bool gtri = true;
                //ktra siêu ngto
                ll temp = i/10;
                while ( temp > 0){
                    if (isprime(temp)){
                        gtri = true;
                    }
                    else if (!isprime(temp)){
                        gtri = false;
                        break;
                    }
                    temp /= 10;
                }
                if (gtri){
                    q.push (i);
                }
            }
        } 
        else if ( isprime(i)){
            q.push (i);
        }
    }
    while ( !q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    clock_t end = clock(); //ghi lại thời gian lúc sau
   cout<<"Time run: "<<(float)(end-begin)/CLOCKS_PER_SEC<<" s"<<endl;
   return 0;
}