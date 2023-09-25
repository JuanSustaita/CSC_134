#include <iostream>
using namespace std;
/*
CSC 134
M3T3
SustaitaJ

*/

void Question1();
void Question2();
void Question3();

int main() {
  // now call for all 3
  //Question1();
  //Question2();
  //Question3();

  cout << "Main menu" << endl;
  cout << "1. Question 1." << endl;
  cout << "2. Question 2." << endl;
  cout << "3. Question 3." << endl;
  cout << "Your Choice? ";

  int choice;
  cin >> choice;
  cout << "You Chose: " << choice << endl;

  if (1 == choice) {
    Question1();
  }
  else if (2 == choice) {
    Question2();
  }
  else if (3 == choice) {
    Question3();
  }
  else {
    cout << "Sorry, that is not a valid choice." << endl;
  }
}
  // Full Functions
  void Question1() {
    cout << "Question 1" << endl;
  }

  void Question2() {
    cout << "Question 2" << endl;
  }

  void Question3() {
    cout << "Question 3" << endl;
  }
