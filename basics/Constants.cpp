#include <iostream>
using namespace std;

int main() {
    // Declare a constant value for π and calculate circle area.
    const double PI = 3.14159;
    double radius = 5;

    double circle_area = PI  * radius * radius;

    cout << "Area of Circle: " << circle_area << endl;

    
    // Create constants for tax rate and calculate final price.
    const double TAX_RATE = 0.18;
    double price = 1000;
    double final_price = price + (price * TAX_RATE);

    cout << "Final Price: " << final_price << endl;


    // Use const to store the number of days in a week.
    const int DAYS = 7;
    
    cout << "days in a Week: " << DAYS << endl;

    return 0;
}