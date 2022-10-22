#include <math.h>

#include <iostream>

using namespace std;

int main() {

    // Declare variables
    int length, width, perimeter, area;

    // Get the length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the perimeter and area of the rectangle
    perimeter = (length * 2) + (width * 2);
    area = length * width;

    // Display the perimeter and area of the rectangle
    cout << "The perimeter of the rectangle is: " << perimeter << "cm" << endl;
    cout << "The area of the rectangle is: " << area << "cm" << endl;

    return 0;
}