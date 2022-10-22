#include <iostream>
using namespace std;

int main(){

    int hours, minutes;

    cout << "Enter the hours followed by the minutes: ";
    cin >> hours >> minutes;

    float t = (float)hours + ((float)minutes/60.0);
    float T = ((4 * t * t) / (t + 2)) - 20;

    cout << "\nt: " << t << endl;
    cout << "Temperature: " << T << endl;

    return 0;
}