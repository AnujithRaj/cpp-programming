#include <iostream>
#include <string>

using namespace std;

int main() {
    // Find larger of two numbers.
    int firstNumber, secondNumber;

    cout << "Enter First Number: ";
    cin >> firstNumber;
    cout << "Enter Second Number: ";
    cin >> secondNumber;

    if (firstNumber > secondNumber) {
        cout << firstNumber << " is largest." << endl;
    } else if (secondNumber > firstNumber) {
        cout << secondNumber << " is largest." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    // Find smallest of two numbers.
    if (firstNumber < secondNumber) {
        cout << firstNumber << " is smallest" << endl;
    } else if (secondNumber < firstNumber) {
        cout << secondNumber << " is smallest" << endl;
    } else {
        cout << "Both Numbers are equal" << endl;
    }


    // Check whether a number is even or odd.
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    // Check whether a number is divisible by 2 or not.
    if (number % 2 == 0) {
        cout << number << " is divisible by 2" << endl;
    } else {
        cout << number << " is not divisible by 2" << endl;
    }


    // Check whether a person passed (marks ≥40).
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 40 && marks <= 100) {
        cout << "Passed" << endl;
    } else if (marks >= 0 && marks < 40) {
        cout << "Failed" << endl;
    } else {
        cout << "Invalid marks" << endl;
    }


    // Check whether age is eligible for driving license.
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible for driving license" << endl;
    } else {
        cout << "Not eligible" << endl;
    }

    
    // Check whether a year is leap year.
    int year;

    cout << "Enter Year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "Leap year" << endl;
    } else {
        cout << "Not Leap Year" << endl;
    }


    // Check whether a number is positive or negative.
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >=  1) {
        cout << "Positive Number" << endl;
    } else if (num <= -1) {
        cout << "Negative Number" << endl;
    } else {
        cout << "Zero" << endl;
    }

    // Check if a number is greater than 100.
    if (num > 100) {
        cout << "Greater than 100" << endl;
    } else {
        cout << "Lower than 100" << endl;
    }

    
    // Check whether alphabet character is vowel or consonant.
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "Vowel" << endl;
        } else {
            cout << "Consonant" << endl;
        }
    } else {
        cout << "Invalid Alphabet Character" << endl;
    }


    // Check whether a character is uppercase or lowercase.
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    } else {
        cout << "Invalid Alphabet" << endl;
    }

    
    // Compare two floating-point numbers.
    float a, b;

    cout << "Enter two floating-point numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << " is greater." << endl;
    } else if (b > a) {
        cout << b << " is greater." << endl;
    } else {
        cout << "Both are equal." << endl;
    }


    //Find absolute value of a number.
    int value;

    cout << "Enter a number: ";
    cin >> value;

    if (value >= 0) {
        cout << "Absolute Value: " << value << endl;
    } else {
        cout << "Absolute Value: " << -value << endl;
    }


    // Check whether password length is at least 8.
    string password;

    cout << "Enter password: ";
    cin >> password;

    if (password.length() >= 8) {
        cout << "Valid Password" << endl;
    } else {
        cout << "Password is too short" << endl;
    }


    // Check if income is taxable.
    float income;

    cout << "Enter annual income: ";
    cin >> income;

    if (income >= 250000) {
        cout << "Income is taxable." << endl;
    } else {
        cout << "Income is not taxable." << endl;
    }

    return 0;
}