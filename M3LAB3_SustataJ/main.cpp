#include <iostream>
using namespace std;
/*
M3LAB3
CSC 134
SustaitaJ
9/27/23
Given a number grade, convert it to a letter grade
*/

int main()
{
    const int A_GRADE = 90;
    const int B_GRADE = 80;
    const int C_GRADE = 70;
    const int D_GRADE = 60;

    cout << "Number Grade to Letter Grade:" << endl;
    // get the number grade
    int num_grade;
    string letter_grade = "NO GRADE";

    cout << "What is the number grade: ";
    cin >> num_grade;

    // convert it to letter grade
    if (num_grade >= A_GRADE) {
        letter_grade = "A";
    }
    else if (num_grade >= B_GRADE) {
        letter_grade = "B";
    }
    else if (num_grade >= C_GRADE) {
        letter_grade = "C";
    }
    else if (num_grade >= D_GRADE) {
        letter_grade = "D";
    }
    else {
        letter_grade = "F";
    }

    // print the letter grade
    cout << "A grade of " << num_grade;
    cout << " is " << letter_grade << endl;
}
