#include <iostream>
#include "functions.h"
using namespace std;

/*
CSC 134
M4LAB2 - Simple Menu
SustaitaJ
10/11/23
*/


int main() {
  // Ask user to choose an option from 1-4
  cout << "Menu" << endl;
  cout << "1. Counting Test" << endl;
  cout << "2. Dice Roller" << endl;
  cout << "3. Total & Average" << endl;
  cout << "4. End Program" << endl;
  cout << "Your Choice: ";
  int choice;
  cin >> choice;
  cout << "You chose " << choice << endl;
  // call different functions based on choice
  if (choice == 1) {
    counting_test();
  }
  else if (choice == 2) {
    dice_roller();
  }
  else if (choice == 3) {
    total_average();
  }
  else if (choice == 4){
    cout << "Goodbye!" << endl;
  }
  else {
    cout << "Please choose a number between 1 and 4." << endl;
  }
}
