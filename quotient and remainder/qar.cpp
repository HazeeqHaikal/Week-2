#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Enter the dividend: ";
    cin >> num1;
    cout << "Enter the divisor: ";
    cin >> num2;

    int quotient = num1 / num2;
    int remainder = num1 % num2;

    cout << "The quotient is: " << quotient << endl;
    cout << "The remainder is: " << remainder << endl;

    return 0;
}