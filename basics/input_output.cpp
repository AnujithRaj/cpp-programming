#include <iostream>
using namespace std;
int main() {
    // Print your name, age, and city on separate lines.
    {
        cout << "Name: Anujith" << endl;
        cout << "Age: 22" << endl;
        cout << "City: Rajgir" << endl;
        cout << endl;
    }


    // Print welcome message inside a box.
    {
        cout << "####################" << endl;
        cout << "# Welcome Anujith ##" << endl;
        cout << "####################" << endl;
        cout << endl;
    }



    // Take two integers and print their sum.
    {
        int a, b, c;

        a = 20;
        b = 30;

        c = a + b;

        cout << "Sum: " << c << endl;
        cout << endl;
    }


    // Take two float numbers and print multiplication.
    {
        float a, b, c;

        a = 20.11;
        b = 12.8;

        c = a * b;

        cout << "Multiplication: " << c << endl;
        cout << endl;
    }


    // input a charactter and print it.
    {
        string name;

        cin >> name;
        cout << "Enter your Name: " << name << endl;
        cout << endl;
    }


    return 0;
}
