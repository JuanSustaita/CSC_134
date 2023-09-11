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
    double menu_price = 0;
    double tax_percent = 0.07; // Cumberland County Tax
    double item_price;
    int num_items;
    string item_name;

    // Step 1 - greet user
    cout << "Welcome to the Grill" << endl;
    // Step 2 - ask user for their order
    cout << "What would you like today?" << endl;
    cin >> item_name;

    cout << "What's the price on the item? " << endl;
    cin >> item_price;

    cout << "How many " << item_name << "(s) do you want? " << endl;
    cin >> num_items;

    // Step 3 - Calculate the menu price
    menu_price = num_items * item_price;

    double tax_dollars;
    double total_price; // price including tax

    tax_dollars = tax_percent * menu_price; // Calculates the amount of tax
    total_price = menu_price + tax_dollars; // Calculates menu price and tax together

    cout << fixed << setprecision(2) << endl;
    // print the receipt
    cout << "Order: " << num_items << " " << item_name << "(s)" << endl;
    cout << "Menu price is: $" << menu_price << endl;
    cout << "Tax total is:  " << tax_dollars << endl;
    cout << "__________________" << endl;
    cout << "Total price:   $" << total_price << endl;

    return 0;
}
