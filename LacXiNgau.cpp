#include <iostream> 
using namespace std;

int tinhtong (int a, int b, int c, int d) {
    int tong = a + b + c + d;
    return tong;
}
int main () {
   int a1,a2,a3,a4;
   int b1,b2,b3,b4;
   cin >> a1 >> a2 >> a3 >> a4; 
   cin >> b1 >> b2 >> b3 >> b4;
   int tongNam  =  tinhtong (a1,a2,a3,a4);
   int tongNga  =  tinhtong (b1,b2,b3,b4);
   if (tongNam > tongNga) {
       cout << "Nam";
       }
       else if (tongNam < tongNga) {
        cout << "Nga";
       }
       else {
        cout << "Tie";
       }
       return 0;
}
