#include <iostream>
using namespace std;
int main() {
    // Arithmetic Operators
    {
        int a = 5, b = 10;  // input variable
        float c;
        c = (a + b) / 2;

        // print output
        cout << "Value of c is: " << c << endl;
    }

    // Area of Sphare and Volume
    {
        int radius; // Our input variable
        float s_area, volume, PI;   // output & other variables
        PI = (float)22/7;   // using explicit conversion

        cout << "Please enter the radius of the sphere! " << endl;
        cin >> radius;  // takeing in input

        s_area = 4 * PI * radius * radius;  // Finding total surface area of sphere
        volume = (4.0 /3) * PI * radius * radius * radius;  // finding volume of sphere
        
        // print the output
        cout << "Surface Area: " << s_area << endl;
        cout << "volume: " << volume << endl;

    }

    return 0;
}
