#ifndef FUNCTIONS_H
#define FUNCTIONS_H
using namespace std;
#include <cstdlib> // for rand
#include <ctime>
// this is what a header looks like

// include any necessary libraries or headers here
// Declare any functions prototype here
void counting_test() {
    int num = 0;
    while (num <= 9) {
        cout << num << " ";
        num++;
    }
  cout << endl;
}

// Dice roller: roll 1d6 hen 3d6
//xdy is defined as rolling x dice with y sides
void dice_roller() {
  cout << "Your seed is: " << time(0) << endl;
  srand(40);
  srand(time(0));
  int d100 = (rand() % 100);
  cout << "Percentage roll:" << endl;
  cout << "You rolled: " << d100 << endl;

  int first = (rand() % 6) + 1;
  int second = (rand() % 6) + 1;
  int third = (rand() % 6) + 1;

  int total = first + second + third;
  cout << "3d6 bell curce roll:" << endl;
  cout << "Roll: " << first << " + " << second;
  cout << " + " << third << " = " << total << endl;
}

void total_average() {
  cout << "Running total and average" << endl;
  int total = 0;

  for (int i = 0; i < 10; i++) {
    int first = (rand() % 6) + 1;
    int second = (rand() % 6) + 1;
    int third = (rand() % 6) + 1;
    int roll_total = first + second + third;

    total += roll_total;
  }
    float average = static_cast<float>(total) / 10;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

}



#endif // FUNCTIONS_H
