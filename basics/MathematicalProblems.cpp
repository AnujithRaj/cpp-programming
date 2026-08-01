#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // Check whether a number is even or odd.
    int number;

    cout << "Enter Number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }


    // Find the largest of two numbers.
    int number1, number2;

    cout << "Enter First Number: ";
    cin >> number1;
    cout << "Enter Second Number: ";
    cin >> number2;

    if (number1 > number2) {
        cout << "Largest Number: " << number1 << endl;
    } else if (number1 < number2) {
        cout << "Largest Number: " << number2 << endl;
    } else {
        cout << "Both Number Equal" << endl;
    }


    // Find the smallest of two numbers.
    if (number1 < number2) {
        cout << "Smallest Number: " << number1 << endl;
    } else if (number1 > number2) {
        cout << "Smallest NUmber: " << number2 << endl;
    } else {
        cout << "Both Number Equal" << endl;
    }

    
    // Find the square root of a number.
    double root, sq_root;

    cout << "Enter a root number: ";
    cin >> root;

    sq_root = sqrt(root);

    cout << "Square Root: " << sq_root << endl;


    // Calculate percentage marks.
    double obtainedMarks, totalMarks, percentage;

    cout << "Enter Obtained Marks: ";
    cin >> obtainedMarks;

    cout << "Enter Total Marks: ";
    cin >> totalMarks;

    percentage = (obtainedMarks / totalMarks) * 100;

    cout << "Percentage: " << percentage << "%" << endl;


    // Find the last digit of a number.
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    cout << "Last digit: " << num % 10 << endl;


    // Find the sum of two-digit numbers.
    int two_digit, first_digit, second_digit;

    cout << "Enter Two Digits Number: ";
    cin >> two_digit;

    first_digit = two_digit / 10;
    second_digit = two_digit % 10;

    cout << "Sum of Two-digit Number: " << first_digit + second_digit << endl;


    // Reverse a two-digit number.
    int reverse;

    reverse = second_digit * 10 + first_digit;

    cout << "Reversed Number: " << reverse << endl;

    
    // Calculate BMI.
    double weight, height, bmi;

    cout << "Enter Your Weight in kg: ";
    cin >> weight;
    cout << "Enter Your Height in Meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI: " << bmi << endl;


    // Calculate speed using distance and time.
    double distance, time, speed;

    cout << "Enter Distance(km): ";
    cin >> distance;

    cout << "Enter Time(h): ";
    cin >> time;

    speed = distance / time;

    cout << "Speed: " << speed << endl;

    return 0;
}