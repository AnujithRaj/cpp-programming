#include <iostream>

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

    return 0;
}