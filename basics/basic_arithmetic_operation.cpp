#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // Input two numbers and perform: Addition, Subtraction, Multiplication, Division, Modulus
    int number1 = 10;
    int number2 = 12;

    cout << "Addition: " << number1 + number2 << endl;
    cout << "Subtraction: " << number1 - number2 << endl;
    cout << "Multiplication: " << number1 * number2 << endl;
    cout << "Division: " << (double)number1 / number2 << endl;
    cout << "Modulus: " << number1 % number2 << endl;


    // Find the square of a number.
    int number = 12;

    int square = number * number;

    cout << "Square: " << square << endl;


    // Find the cube of a number.
    int base = 8;
    int exponent = 3;

    int cube = pow(base, exponent);

    cout << "Cube: " << cube << endl;


    // Calculate the area of a rectangle.
    int length = 20;
    int width = 12;

    int rectangle_area = length * width;

    cout << "Area of rectangle: " << rectangle_area << endl;


    // Calculate the perimeter of a rectangle.
    int rectangle_perimeter = 2 * (length + width);

    cout << "Perimeter of Rectangle: " << rectangle_perimeter << endl;
    // Calculate the area of a circle.
    int radius = 7;

    double circle_area = (22.0 / 7) * radius * radius;

    cout << "Area of Circle: " << circle_area << endl;


    // Calculate simple interest.
    int principal = 10000;
    double rate = 5;
    double time = 8;

    double si = (principal * rate * time) / 100;

    cout << "Simple Interest: " << si << endl;


    // Calculate compound interest.
    double compound_interest = principal * pow((1 + rate / 100), time) - principal;

    cout << "Compound Interest: " << compound_interest << endl;


    // Convert Celsius to Fahrenheit.
    double celsius = 40;
    
    double fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Fahrenheit: " << fahrenheit << endl;


    // Convert Fahrenheit to Celsius.
    double fahrenheit1 = 100;

    double celsius1 = (fahrenheit1 - 32) * 5 / 9;

    cout << "Celsius: " << celsius1 << endl;

    return 0;
}
