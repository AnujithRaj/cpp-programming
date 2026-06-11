#include <iostream>  // Libraries
#include <cmath>    // Libraries

using namespace std;    // namespace

int main() {   // Main function

    // print Hello World
    cout << "Hello, World!" << endl;



    // print Name, Age, College.
    cout << "Hi! I am Anujith" << endl;   // All the code
    cout << "I am 22 Years old" << endl;
    cout << " I am student at Manipal University Jaipur" << endl;
    


    // Integer value
    int x = 0;
    x = 10;
    cout << x << endl;
    


    // Take input and print output
    int age;
    cout << "Enter Age:";
    cin >> age;
    cout << "Hi, So your age is... " << age << endl;
    


    // input initial 
    char initial;
    cout << "Initialize a Character:";
    cin >> initial;
    cout << "Hi! So the initial letter of your name is " << initial << endl;



    // Take input integer, float and print output
    int firstNumber;
    float secondNumber;

    cout << "Enter First Number: ";
    cin >> firstNumber;

    cout << "Enter Second Number: ";
    cin >> secondNumber;
    
    cout << "value of First Number is " << firstNumber << endl;
    cout << "value of Second Number is " << secondNumber << endl;


    // print ASCII value of characters.
    char ch;
    cout << "Enter Character: ";
    cin >> ch;

    cout << "ASCII Value:" << (int)ch << endl;


    // Swap two numbers.
    int num1 = 10,num2 = 20;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Value of First Number:" << num1 << endl;
    cout << "Value of Second Number:" << num2 << endl;


    // convert temperature celsius -> Fahrenheit.
    float celsius = 38;
    
    float fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Fahrenheit:" << fahrenheit << endl;


    // Area of circle.
    int radius = 7;
    double area = 3.14 * radius * radius;

    cout << "Area of Circle:" << area << endl;


    // Area of rectangle.
    int length = 12, width = 8;
    int rectangle_area = length * width;

    cout << "Area of Rectangle:" << rectangle_area << endl;
    

    // Simple interest calculator.
    int principal = 10000, rate = 8, time = 5;

    int simple_interest = (principal * rate *  time) / 100;

    cout << "Simple Interest:" << simple_interest << endl;

    
    // compound interest calculator.
    double principal2 = 20000, rate2 = 2, time2 = 8;

    double amount = principal2 * pow((1 + rate2 / 100), time2);
    double compound_interest = amount - principal2;

    cout << "Compound Interest:" << compound_interest << endl;
        
    
    // Convet days into years/monts days.
    int days = 800;

    int years = days / 365;
    days %= 365;

    int months = days / 30;
    days %= 30;

    cout << "Years:" << years 
    << ", Months:" << months 
    << ", Days:" << days <<endl;
    

    // Conver seconds into hours/minutes/seconds.
    int seconds = 8000;

    int hours = seconds / 3600;
    int remaining = seconds % 3600;

    int minutes = remaining / 60;
    int remain_seconds = remaining % 60;

    cout << "Hours:" << hours
    << ", Minutes:" << minutes
    << ", Seconds:" << remain_seconds << endl;
    

    // Find total and average of 5 subjects.
    int math = 87;
    int science = 92;
    int social_science = 82;
    int hindi = 84;
    int sanskrit = 78;

    int total_number = math + science + social_science + hindi + sanskrit;
    cout << "Total Number:" << total_number << endl;

    float average_number = (float)total_number / 5;
    cout << "Average Number:" << average_number << endl;


    // Currency conversion program.
    int inr = 100;
    double usd = inr / 80.0;

    cout << "USD: " << usd << endl;

    return 0;
}
