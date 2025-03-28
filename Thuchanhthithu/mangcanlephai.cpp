#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int n,m;
    cin >> n >> m;
    long long  a[3][3] = {{593795850, 925527, 97481109},
                                        {8190, 9258, 2323},
                            {-8328541, 62240, 70544569}};
    for ( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int 
    int rong = 10;
    for ( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << setw(rong) << a[i][j];
        }
        cout << endl;
    }
}