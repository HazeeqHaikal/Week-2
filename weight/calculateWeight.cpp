#include <iostream>
using namespace std;

int main() {
    // declare variables
    float weightKg, weightPound;

    // get input from user
    cout << "Enter your weight in KG: ";
    cin >> weightKg;

    // calculate weight in pounds
    weightPound = weightKg * 2.2;
    cout << "Your weight in pounds is " << weightPound << " pound" << endl;

    return 0;
}