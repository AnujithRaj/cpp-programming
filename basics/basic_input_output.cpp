#include <iostream>

using namespace std;

int main() {
    // Print your name, age, and city on separate lines.
    cout << "Name: Anujith" << endl;
    cout << "Age: 22" << endl;
    cout << "City: Rajgir" << endl;
    cout << endl;
    

    // Print welcome message inside a box.
    cout << "####################" << endl;
    cout << "# Welcome  Anujith #" << endl;
    cout << "####################" << endl;
    cout << endl;


    // Take two integers and print their sum.
    int a = 20;
    int b = 30;

    int c = a + b;

    cout << "Sum: " << c << endl;
    cout << endl;


    // Take two float numbers and print multiplication.
    float num1 = 20.11;
    float num2 = 12.8;

    float product = num1 * num2;

    cout << "Multiplication: " << product << endl;
    cout << endl;


    // input a character and print it.
    char ch = 'A';

    cout << "Character: " << ch << endl;
    

    // Print a formatted sentence using variables.
    string name = "Anujith";
    int age = 22;
    string city = "Rajgir";

    cout << "My name is " << name
     << ", I am " << age
     << " years old and I live in "
     << city << "." << endl;


    // Take 3 numbers and print average.
    int firstNumber = 20, secondNumber = 30, thirdNumber = 40;

    double average = (firstNumber + secondNumber + thirdNumber) / 3.0;

    cout << "Average: " << average << endl;


    // Swap two numbers using third variable.
    int fNumber = 11, sNumber = 20, temp;

    temp = fNumber;
    fNumber = sNumber;
    sNumber = temp;

    cout << "First Number: " << fNumber << endl;
    cout << "Second Number: " << sNumber << endl;


    // Swap two numbers without third variable.
    int x = 10, y = 12;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "First Number: " << x << endl;
    cout << "Second Number: " << y << endl;


    // convert temperature Celsius -> Fahrenheit.
    double celsius = 40;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;


    // Convert Fahrenheit -> Celsius.
    double tempFahrenheit = 100;

    double convertedCelsius = (tempFahrenheit - 32) * 5.0 / 9.0;

    cout << "Temperature in Celsius: " << convertedCelsius << endl;


    // Find square and cube of a number.
    int num = 5;

    cout << "Square of Number: " << num * num << endl;
    cout << "Cube of Number: " << num * num * num << endl;


    // Calculate perimeter of rectangle.
    int length = 12, width = 8;

    cout << "Perimeter of Rectangle: " << 2 * (length + width) << endl;


    // Calculate area of rectangle.
    cout << "Area of Rectangle: " << length * width << endl;


    // Calcualate simple interest.
    const double principal = 10000;
    const double rate = 8;
    const double time = 3;

    double simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simple_interest << endl;


    // Convert days into years + months + days
    int days = 1000, months, years, remain_days;

    years = days / 365;
    remain_days = days % 365;

    months = remain_days / 30;
    remain_days = remain_days % 30;

    cout << "Years: " << years 
    << ", Months: " << months 
    << ", Days: " << remain_days << endl;

    return 0;
}
