#include <iostream>
#include <iomanip>

/*
CSC 134
M2LAB1_Sustaita
Find the volume of a crate
Find the Price we sell for
Find the profit
9/13/23
*/

using namespace std;

int main()
{
    cout << "General Crate Pricing System" << endl;
    // declare variable

    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    double length, width, height; // in feet
    double volume; // in cubic foot
    double cost, charge, profit; // $

    // get crate dimensions

    cout << "Enter length, width, and height in feet. Press ENTER after each value." << endl;
    cin >> length >> width >> height;

    // calculate the volume

    volume = length * width * height;

    // find the cost and price for the volume

    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;

    // find the profit

    profit = charge - cost;

    // output the answer

    cout << fixed << setprecision(2);
    cout << "That crate is: " << volume << " cubic ft." << endl;
    cout << "Cost to manufacture: $" << cost << endl;
    cout << "Charge to customer:  $" << charge << endl;
    cout << "Our Profit:          $" << profit << endl;

    return 0;
}
