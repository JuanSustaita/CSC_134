/*
CSC 134
M1LAB
Juan Sustaita
8/24/23
*/

#include <iostream>
using namespace std;

int main()
{
  // This will simulate an apple orchard.
  // My name
  string name = "Juan Sustaita";
  // apples in stock, price per apple, and total price
  int apples = 100;
  double pricePerApple = 0.25;
  double totalPrice = (double) apples * pricePerApple;

  cout << "Welcome to " << name;
  cout << "'s apple orchard." << endl;

  cout << "We have " << apples << " apples in stock" << endl;

  cout << "Apples are currently $" << pricePerApple <<" each." << endl;

  cout << "If you want them all, it wil be $" << totalPrice << endl;

}
