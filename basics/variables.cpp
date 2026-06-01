#include <iostream>
using namespace std;
int main() {
    // Take name as input and print.
    {
        string name;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Name: " << name << endl;
    }


    // Take two numbers and print their: sum, difference, product, and division.
    {
        int a, b;
        a = 20;
        b = 30;

        cout << "Sum: " << a + b << endl;
        cout << "Difference: " << a - b << endl;
        cout << "Product: " << a * b << endl;
        cout << "Division: " << (float)a / b << endl;

    }


    // Take age input and print.
    {
        int age;
        cin >> age;

        cout << "Age: " << age << endl;
    }


    // Take length and breadth of rectangle and print area:
    int length, breadth, area;
    length = 20;
    breadth = 11;

    area = length * breadth;

    cout << "Area of Rectangle: " << area << endl;


    // Convert temperature from Celsius to Fahrenheit.
    float celsius, fahrenheit;

    cout << "Enter temperature in  Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in fahrenheit: " << fahrenheit << endl;





    return 0;
    
}