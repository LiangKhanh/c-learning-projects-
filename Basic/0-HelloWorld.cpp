#include <iostream>

using namespace std;

int main() {
    char c[100] = {'A'};
    int i;

    for (i = 0; c[i] != '\0'; i++) { // Loop until null terminator
        if (c[i] >= 'A' && c[i] <= 'Z') {
            c[i] += 1;
        }
    }

    cout << c << endl; // Print the entire string

    return 0;
}