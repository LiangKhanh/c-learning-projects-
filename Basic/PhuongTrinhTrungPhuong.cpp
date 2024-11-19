#include <iostream> 
#include <cmath> 

using namespace std;

void pttp (double a, double b, double c) {
    if (a == 0 && b != 0) {
        double t = (-c) / b;
        if (t == 0)    cout << "{" << 0 << "}";
        else if (t > 0)    cout << "{" << -sqrt(t) << ", " << sqrt(t) << "}";
        else    cout << "Ø"; 
    }

    else if (a == 0 && b == 0) {
        if (c != 0) {
            cout << "Ø"; 
        }
        else {
            cout << "ℝ"; 
        }
    }

    else if (a != 0 && b == 0) {
        if (c == 0) {
            cout << "{" << 0 << "}";

        }
        else {
            double t = -c / a;
            if (t > 0) {
                cout << "{" << -sqrt(sqrt(t)) << ", " << sqrt(sqrt(t)) << "}";
            }
            else {
                cout << "Ø"; 
            }
        }
    }
        //đặt t = x^2, => ax^2 + b + c =0
        else {
            double delta = b*b - 4*a*c;
            if (delta == 0) {
                double t = -b / (2*a);
                if (t > 0 ) {
                    double x1 = sqrt(t);
                    double x2 = -x1;
                    cout << "{" << x2 << ", " << x1 << "}";
                }
                if ( t==0) {
                    cout << "{" << "0" << "}";
                }
                if ( t<0) {
                    cout << "Ø";
                }
            }
            else if (delta < 0) {
                cout << "Ø";
            }

            else {
                if (delta > 0) {
                    double t1 = (-b + sqrt(delta)) / (2*a);
                    double t2 = (-b - sqrt(delta)) / (2*a);
                    if (t1 > 0 && t2 > 0 && t1 != t2){
                        double x1 = sqrt(t1);
                        double x2 = (-1)*x1;
                        double x3 = sqrt(t2);
                        double x4 = (-1)*x3;
                        if ( t1<t2) {
                            cout << "{" << x4 << ", " << x2 << ", " << x1 << ", " << x3 << "}";
                        }
                        else {
                            cout << "{" << x2 << ", " << x4 << ", " << x3 << ", " << x1 << "}";
                        }
                    }
                    if ( t1 == 0 && t2 == 0) {
                        cout << "{" << "0" << "}";
                    }
                    if ( t1 == 0 && t2 > 0) {
                        cout << "{" << -sqrt(t2) << ", "<< "0" << ", " << sqrt(t2) << "}";
                    }
                    if (t1 > 0 && t2 == 0) {
                        cout << "{" << -sqrt(t1) << ", "<< "0" << ", " << sqrt(t1) << "}";
                    }
                    else if (t1 > 0 && t2 < 0) {
                        double x1 = sqrt(t1);
                        double x2 = (-1)* x1;
                        cout << "{" << x2 << ", " << x1 << "}";
                    }
                    else if ( t1 == 0 && t2 < 0) {
                        cout << "{" << "0" << "}";
                    }
                    else if (t1 < 0 && t2 > 0) {
                        double x3 = sqrt(t2);
                        double x4 = (-1)* x3;
                        cout << "{" << x4 << ", " << x3 << "}";
                    }
                    else if (t1 < 0 && t2 == 0 ) {
                        cout << "{" << "0" << "}";
                    }
                    else if ( t1 < 0 && t2 < 0 ){
                        cout << "Ø";
                    }
            }
            }
        }
}

int main () {
    double a;
    double b;
    double c; 
    cin >> a >> b >> c; 
    pttp(a,b,c);
    return 0;
}