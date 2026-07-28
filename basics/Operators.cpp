#include <iostream>
using namespace std;

int main() {
    // Demonstrate all arithmetic operators.
    int a = 20;
    int b = 3;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;


    // Demonstrate all relational operators.
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;


    // Demonstrate all logical operators.
    bool x = true;
    bool y = false;

    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;
    cout << "!y: " << (!y) << endl;


    // Demonstrate increment and decrement operators.
    int n = 5;

    cout << "Initial value: " << n << endl;
    cout << "Post Increment (n++): " << n++ << endl;
    cout << "After Post Increment: " << n << endl;
    cout << "Pre Increment (++n): " << ++n << endl;
    cout << "Post Decrement (n--): " << n-- << endl;
    cout << "After Post Decrement: " << n << endl;
    cout << "Pre Decrement (--n): " << --n << endl;


    // Swap two numbers using a temporary variable.
    int number1 = 12;
    int number2 = 10;

    int temp = number2;
    number2 = number1;
    number1 = temp;

    cout << "First Number: " << number1 << endl;
    cout << "Second Number: " << number2 << endl;


    // Swap two numbers without a temporary variable.
    int num1 = 20;
    int num2 = 30;

    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;

    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;


    // Find the remainder when one number is divided by another.
    int p = 15;
    int q = 4;

    cout << "Remainder: " << p % q << endl;

    return 0;
}
