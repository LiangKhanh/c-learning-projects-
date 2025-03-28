    #include <iostream> 
    #define ll long long
    using namespace std ;

    int main () {
        ll a, b;
        ll x = 0, y = 0;

        while (cin >> a >> b) {
            if (b == -4) x += a;     
            else if (b == -2) x -= a; 
            else if (b == -1) y += a; 
            else if (b == -3) y -= a; 
        }
            long long buoc1 = 0, huong1 = 0, buoc2 = 0, huong2 = 0;
            //hướng đông bắc 
        if (x > 0 && y > 0) {
            buoc1 = y;
            huong1 = -1;
            buoc2 = x;
            huong2 = -4;
        }
    //hướng đông nam 
        if (x > 0 && y < 0) {
            buoc1 = -y;
            huong1 = -3;
            buoc2 = x;
            huong2 = -4;
        }
    //hướng tây nam 
        if (x < 0 && y < 0) {
            buoc1 = -y;
            huong1 = -3;
            buoc2 = -x;
            huong2 = -2;
        }
    //hướng tây bắc
        if (x < 0 && y > 0) {
            buoc1 = y;
            huong1 = -1;
            buoc2 = -x;
            huong2 = -2;
        }
        cout << buoc1 << " " << huong1 << " " << buoc2 << " " << huong2;
        return 0;
    }