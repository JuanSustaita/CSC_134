#include <iostream>
#include <stdlib.h> // for random number
#include <time.h> // for time
using namespace std;
/*
CSC 134
M3T2 - Craps
SustaitaJ
9/18/23

7 or 11 = instant win
2, 3, 12 = instant lose
*/

    int roll() {
    int roll = rand() % 6;
    return roll;
    }

int main() {

    cout << "Welcome to the Craps table" << endl;
    int die1, die2, total;
    // roll is 2d6 (2 6 sided die)
    //cout << "What are the two rolls?" << endl;
    //cin >> die1, die2;
    int seed = time(0);
    cout << "Today's lucky number is: " << seed << endl;
    srand(seed);
    //Random roll
    die1 = roll();
    die2 = roll();
    total = die1 + die2;
    cout << "You rolled: ";
    cout << die1 << " + " << die2;
    cout << " == " << total << endl;

    // Do if / else if for:
    // 7 or 11 (win)
    // 2, 3, 12 (lose)
    if (total == 7 || total == 11) {
        cout << "You win" << endl;
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << "HAHA I GOT YOUR MONEY" << endl;
    }
    else {
        cout << "Did not win or lose" << endl;
    }
}
