#include <iostream>

using namespace std;

int main() {
    // declare 4 int variable
    int num1, num2, num3, num4;
    int total;
    float average;

    // calculate total and average of 4 number
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter fourth number: ";
    cin >> num4;

    // calculate total and average
    total = num1 + num2 + num3 + num4;
    average = (float)total / 4;

    // display total and average
    cout << "\nTotal is: " << total << endl;
    cout << "Average is: " << average << endl;

    // finished the program
    // cout << "Press enter to continue..." << endl;
    // cin >> num1;

    return 0;
}