#include <iostream>
#include <cmath>

using namespace std;
int main() {
    {
        int year = 2020;

        if (year > 2000){
            cout << "Welcom to the 21th century!" << endl;
            // true statement
        }
        else {
            cout << "Hope to see you soon in the future!" << endl;
        }

        // If its > 2000, then "Welcome to the 21st cintury"
        // anything else, then "HOpe to see you soon in the furure!"
    }
    


    {
        int year;

        cout << "Please enter your year!" << endl;
        cin >> year;
        if (year % 4 == 0) {
            // this is first statement
            cout << "It's is a leap year!" << endl;

        }
        else {
            cout << "It's no a leap year!" << endl;
        }
    }




    {
        int score;

        cout << "Please enter your score!" << endl;
        cin >> score;
        if (score > 90) {
            cout << "Congrats!1 You ger faster wifi and a new smartphone!" << endl;
        }
        else if (score > 75) {
            cout << "You studied very hard. Better luck next time. Congrats on better wifi!" << endl;
        }
        else if (score > 60) {
            cout << "You are getting eithr of new wifi or smartphone. Start studying!" << endl;
        }
        else{
            cout << "You can do way better. Let me know if iI can help you anhow!" << endl;
        }

        cout << "Code is working when after the conditionals!" << endl;

    }

    {
        int score, pass;

        cout << "Please enter your score!" << endl;
        cin >> score;

        if (score >= 50) {
            if (score >= 80) {
                cout << "Congrats!" << endl;
            } 
            else {
                cout << "You tried your best!" << endl;
            }
        }
        else {
            if (score >= 40) {
                cout << "Well at least you passed" << endl;
            }
            else {
                cout << "Better luck next time!" << endl;
                }
            }
        
    }



    {
        // Write a program to check if three points on x-y plane are collinear.
        int x1, x2, x3, y1, y2, y3;
        float a, b, c, s, area;
        // x1, y1 = 1
        // x2, y2 = 2
        // x3, y3 = 3
        // 1-2 = a
        // 2-3 = b
        // 3-1 = c

        cout << "Enter values of first point (x and y respectively):" << endl;
        cin >> x1 >> y1;
        cout << "Enter values of second point (x and y respectively):" << endl;
        cin >> x2 >> y2;
        cout << "Enter values of third point ( x and y respectively):" << endl;
        cin >> x3 >> y3;

        // sqrt,pow
        a = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
        b = sqrt(pow((x2-x3), 2) + pow((y2-y3), 2));
        c = sqrt(pow((x3-x1), 2) + pow((y3-y1), 2));
        s = (a + b + c) / 2;

        cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl << "S: " << s << endl;

        area = (s * (s-a) * (s-b) * (s-c));

        cout << "Area: " << area << endl;

        if (!area) {
            cout << "Points are collinear" << endl;
        }
        else {
            cout << "Point area not collinear" << endl;
        }

    }

    return 0;
}