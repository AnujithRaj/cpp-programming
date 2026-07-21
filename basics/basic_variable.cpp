#include <iostream>
using namespace std;
int main() {
    // Take name as input and print.
    string name = "Anujith";

    cout << "Name: " << name << endl;
    

    // Take two numbers and print their: sum, difference, product, and division.
    int a = 20;
    int b = 30;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Division: " << (float)a / b << endl;


    // Store and display your age.
    int age = 21;

    cout << "Age: " << age << endl;


    // Take length and breadth of rectangle and print area:
    int length = 20; 
    int breadth = 12; 
  
    int area = length * breadth;

    cout << "Area of Rectangle: " << area << endl;


    // Convert temperature from Celsius to Fahrenheit.
    double celsius = 40;

    double fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in fahrenheit: " << fahrenheit << endl;


    // Declare variables of type int, float, double, char, and bool.
    int n = 20;
    float f = 3.14;
    double d = 20.112003;
    char ch = 'A';
    bool boolean = true;

    cout << "Integer Number:" << n << ", " << "Float Number:" << f << ", " << "Double Number:" << d << ", " << "Character:" << ch << ", " << "Boolean:" << boolean << endl;
    

    // Store the value of π and print it.
    const double PI = 3.141592653589793;

    cout << "Value of PI:" << PI << endl;


    // Convert an integer to a double.
    int number = 20;

    double newNumber = number;
    
    cout << "Number:" << newNumber << endl;


    // Display the size of different data types using sizeof().
    int num1 = 20;
    float num2 = 11.12;
    double num3 = 20.1130;
    char ch1 = 'S';
    string name1 = "Siddharth";
    bool val = true;
    cout << "Integer Value Size:" << sizeof(num1) << ", " << "Float Value Size:" << sizeof(num2) << ", " << "Double Value Size:" << sizeof (num3) << ", " << "Character Value Size:" << sizeof(ch1) << "," << "String Value Size:" << sizeof(name1) << ", " << "Boolean Value Size:" << sizeof(val) << endl;
    return 0;
    
}