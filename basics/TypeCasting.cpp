#include <iostream>
using namespace std;

int main() {
    // Convert float to integer.
    float f = 20.11;
    int n = (int)f;

    cout << "Converted Number: " << n << endl;


    // Convert integer to float.
    int integer = 30;
    float dec = (float) integer;

    cout << "Converted Number: " << dec << endl;


    // Calculate average of three integers using type casting.
    int first_number = 10;
    int second_number = 20;
    int third_number = 30;

    float avg = (float)(first_number + second_number + third_number) / 3;

    cout << "Average: " << avg << endl;

    // Demonstrate implicit and explicit type conversion.
    int a = 15;
    float b = a;    // Implicit conversion

    cout << "Implicit Conversion: " << b << endl;

    float x = 45.67;
    int y = (int)x; // Explicit conversion

    cout << "Explicit Conversion: " << y << endl;
    return 0;
}