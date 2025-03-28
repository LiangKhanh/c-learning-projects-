#include <iostream>
using namespace std;

int main (){
    int x = 10;
    cout << &x << endl;
    int *p = &x;
    *p = 20;
    cout << p << endl;
    cout << *p;
}