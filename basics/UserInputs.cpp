#include <iostream>
using namespace std;

int main() {
    // Calculate total marks of 5 subjects.
    int english, science, hindi, maths, sanskrit;
    
    cout << "Enter English Marks: ";
    cin >> english;
    cout << "Enter Science Marks: ";
    cin >> science;
    cout << "Enter Hindi Marks: ";
    cin >> hindi;
    cout << "Enter Maths Marks: ";
    cin >> maths;
    cout << "Enter Sanskrit Marks: ";
    cin >> sanskrit;

    int total = english + science + hindi + maths + sanskrit;

    cout << "Total Marks:" << total << endl;

    // Calculate average marks.
    double avg = (double)total / 5;

    cout << "Average Marks: " << avg << endl;


    // Convert days into years and months.
    int days;

    cout << "Enter Days: ";
    cin >> days;

    int years = days / 365;
    int remaining_days = days % 365;
    int months = remaining_days / 30;
    int days_left = remaining_days % 30;

    cout << "Years: " << years << ", Months: " << months << ", Days: " << days_left << endl;


    // Convert minutes into hours and minutes.
    int minutes;

    cout << "Enter Minutes: ";
    cin >> minutes;

    int hours = minutes / 60;
    int remaining_minutes = minutes % 60;

    cout << "Hours: " << hours << ", Minutes: " << remaining_minutes << endl;


    // Calculate electricity bill for given units.
    int units, rate;

    cout << "Enter Electricity Units: ";
    cin >> units;
    cout << "Enter Electricity Rate per Unit: ";
    cin >> rate;

    int bill = units * rate;
    cout << "Electricity Bill: " << bill << endl;


    // Calculate salary after bonus.
    int salary;
    double bonus = 0.20;

    cout << "Enter your Salary: ";
    cin >> salary;

    double new_salary = salary + (salary * bonus);

    cout << "Salary After Bonus: " << new_salary << endl;

    return 0;
}
