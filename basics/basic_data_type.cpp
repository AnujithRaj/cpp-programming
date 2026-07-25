#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Arithmetic calculator
    int a = 20;
    int b = 3;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    

    // Find remainder of two numbers.
    int remainder = a % b;

    cout << "Remainder: " << remainder << endl;


    // Find remainder without %
    int remainderWithoutMod = a - (a / b) * b;

    cout << "Remainder Without %: " << remainderWithoutMod << endl;


    // Check even or odd.
    int n = 20;

    if (n % 2 == 0) {
        cout << "Even" << endl;
    } else{
        cout << "Odd" << endl;
    }


    // Increment/decrement practice.

    cout << "Increment Before: " << n << endl;

    cout << "After: " << n++<< endl;

    cout << "Before Decrement: " << n << endl;

    cout << "After Decrement: " << n-- << endl;

    // Find ASCII value of character.
    char ch = 'A';

    cout << "ASCII value of " << ch << " is " << (int)ch << endl;


    // Convert character lowercase -> uppercase
    char character = 's';

    if (character >= 'a' && character <= 'z') {
        character = character - ('a' - 'A');
    }

    cout << "Uppercase: " << character << endl;


    // Find largest of 2 numbers.
    int num1 = 20;
    int num2 = 30;

    if (num1 > num2) {
        cout << "Largest Number: " << num1 << endl;
    } else {
        cout << "Largest Number: " << num2 << endl;
    }


    // Find largest of 3 numbers.
    int number1 = 11;
    int number2 = 20;
    int number3 = 30;

    if (number1 >= number2 && number1 >= number3) {
        cout << "Largest Number: " << number1 << endl;
    } else if (number2 >= number1 && number2 >= number3) {
        cout << "Largest Number: " << number2 << endl;
    } else {
        cout << "Largest Number: " << number3 << endl;
    }


    // Find smallest of 3 numbers.
    if (number1 <= number2 && number1 <= number3) {
        cout << "Smallest Number: " << number1 << endl;
    } else if (number2 <= number1 && number2 <= number3) {
        cout << "Smallest Number: " << number2 << endl;
    } else {
        cout << "Smallest Number: " << number3 << endl;
    }

    // Check divisible by 5 and 11.
    int number = 20;

    if (number % 5 == 0 && number % 11 == 0) {
        cout << "Divisible by both 5 and 11" << endl;
    } else {
        cout << "Not Divisible" << endl;
    }


    // Check leap years.
    int years = 2026;

    if (years % 400 == 0 || (years % 4 == 0 && years % 100 != 0)) {
        cout << years << " is Leap Years"<< endl;
    } else {
        cout << years << " is Not Leap Year" << endl;
    }


    // Find power using operator logic.
    int num = 12;

    int power = num * num;

    cout << "Power value: " << power << endl;


    // Calculate electricity bill.
    double units = 25;
    double rate = 8;

    double bill = units * rate;

    cout << "Electricity bill: " << bill << endl;


    // Calculate percentage and grade.
    int english = 85;
    int hindi = 89;
    int science = 92;
    int math = 96;
    int sanskrit = 72;

    double percentage = ((english + hindi + science + math + sanskrit) / 500.0) * 100;

    if (percentage >= 90) {
        cout << "Percentage: " << percentage << ", grade: A+" << endl;
    } else if (percentage >= 75) {
        cout << "Percentage: " << percentage << ", Grade: A" << endl;
    } else if (percentage >= 60) {
        cout << "Percentage: " << percentage << ", Grade: B" << endl; 
    } else if (percentage >= 40) {
        cout << "Percentage: " << percentage << ", Grade: Pass" << endl;
    } else {
        cout << "Percentage: " << percentage << ", Grade: Fail" << endl;
    }

    
    // Calculate profit/loss.
    int cost_price = 1000;
    int sell_price = 1200;

    if (sell_price > cost_price){
        cout << "Profit: " << sell_price - cost_price << endl;
    } else if (sell_price < cost_price){
        cout << "Loss: " << cost_price - sell_price << endl;
    }   else {
        cout << "No Profit No Loss" << endl;
    }


    // Check positive/negative/zero.
    int check_number = 20;

    if (check_number > 0) {
        cout << "Positive" << endl;
    } else if (check_number < 0) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }


    // Power calculation
    int base = 4;
    int exponent = 5;

    cout << "Power of Number: " <<  pow(base, exponent) << endl;


    // Square root using library
    int value = 25;

    cout << "Square root: " << sqrt(value) << endl;
    return 0;
}
