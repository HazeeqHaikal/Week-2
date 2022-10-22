#include <iostream>
using namespace std;

int main(){

    // Declare variables
    float earthDepth, celsius, fahrenheit;

    // Get input from user
    cout << "Enter the depth of the earth in kilometers: ";ó
    cin >> earthDepth;

    // Calculate temperature
    celsius = 10 * earthDepth + 20;
    fahrenheit = 1.8 * (float)celsius + 32;

    // Display results
    cout << "The temperature at " << earthDepth << " kilometers is " << celsius << " degrees Celsius or " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;

}