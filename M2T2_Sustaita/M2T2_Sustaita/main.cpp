#include <iostream>
#include <iomanip>

using namespace std;

/*
CSC 134
M2T1 - Receipt Calculator V2
SustaitaJ
9/6/23


user should enter name of food item, price, and quantity

*/

int main()
{
    double menu_price = 5.99;
    double tax_percent = 0.07; // Cumberland County Tax
    double tax_dollars;
    double total_price; // price including tax

    tax_dollars = tax_percent * menu_price; // Calculates the amount of tax
    total_price = menu_price + tax_dollars; // Calculates menu price and tax together

    cout << fixed << setprecision(2) << endl;
    cout << "Menu price is: $" << menu_price << endl;
    cout << "Tax total is:  " << tax_dollars << endl;
    cout << "__________________" << endl;
    cout << "Total price:   $" << total_price << endl;

    return 0;
}

