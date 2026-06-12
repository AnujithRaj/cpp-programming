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
    int a, b, c;

    a = 20;
    b = 30;

    c = a + b;

    cout << "Sum: " << c << endl;
    cout << endl;


    // Take two float numbers and print multiplication.
    float num1, num2, product;

    num1 = 20.11;
    num2 = 12.8;

    product = num1 * num2;

    cout << "Multiplication: " << product << endl;
    cout << endl;


    // input a character and print it.
    char ch;

    cout << "Enter Character: ";
    cin >> ch;

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
    int firstNumber, secondNumber, thirdNumber;

    cout << "Enter First Number:";
    cin >> firstNumber;

    cout << "Enter Second Number:";
    cin >> secondNumber;

    cout << "Enter Third Number:";
    cin >> thirdNumber;

    double average = (firstNumber + secondNumber + thirdNumber) / 3.0;

    cout << "Average: " << average << endl;


    // Swap two numbers using third variable.
    int fNumber, sNumber, temp;
    
    cout << "Enter First Number: ";
    cin >> fNumber;

    cout << "Enter Second Number: ";
    cin >> sNumber;

    temp = fNumber;
    fNumber = sNumber;
    sNumber = temp;

    cout << "First Number: " << fNumber << endl;
    cout << "Second Number: " << sNumber << endl;


    // Swap two numbers without third variable.
    int x, y;

    cout << "Enter First Number: ";
    cin >> x;

    cout << "Enter Second Number: ";
    cin >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "First Number: " << x << endl;
    cout << "Second Number: " << y << endl;


    // convert temperature Celsius -> Fahrenheit.
    double celsius, fahrenheit;

    cout << "Enter Temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;


    // Convert Fahrenheit -> Celsius.
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << "Temperature in Celsius: " << celsius << endl;


    // Find square and cube of a number.
    int num;

    cout << "Enter Number: ";
    cin >> num;

    cout << "Square of Number: " << num * num << endl;
    cout << "Cube of Number: " << num * num * num << endl;


    // Calculate perimeter of rectangle.
    int length, width;

    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Width:";
    cin >> width;

    cout << "Perimeter of Rectangle: " << 2 * (length + width) << endl;


    // Calculate area of rectangle.
    cout << "Area of Rectangle: " << length * width << endl;


    // Calcualate simple interest.
    double principal, rate, time;

    cout << "Enter Principal: ";
    cin >> principal;

    cout << "Enter Rate: ";
    cin >> rate;

    cout << "Enter Time: ";
    cin >> time;

    double simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simple_interest << endl;


    // Convert days into years + months + days
    int days, months, years, remain_days;

    cout << "Enter Days:";
    cin >> days;

    years = days / 365;
    remain_days = days % 365;

    months = remain_days / 30;
    remain_days = days % 30;

    cout << "Years: " << years 
    << ", Months: " << months 
    << ", Days: " << remain_days << endl;

    return 0;
}
