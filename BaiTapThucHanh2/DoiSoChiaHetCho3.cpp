#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputNumber;
    cin >> inputNumber;
    string largestNumber = inputNumber;
    int digitSum = 0;

 
    for (char digit : inputNumber) {
        digitSum += digit - '0';
    }


    for (int i = 0; i < inputNumber.length(); ++i) {
        char originalDigit = inputNumber[i];
        for (char newDigit = '0'; newDigit <= '9'; ++newDigit) {
            if (newDigit == originalDigit) continue;
            int newSum = digitSum - (originalDigit - '0') + (newDigit - '0');
            if (newSum % 3 == 0) {
                string tempNumber = inputNumber;
                tempNumber[i] = newDigit;
                if (tempNumber > largestNumber) {
                    largestNumber = tempNumber;
                }
            }
        }
    }
    

    cout << largestNumber << endl;
    return 0;
}

