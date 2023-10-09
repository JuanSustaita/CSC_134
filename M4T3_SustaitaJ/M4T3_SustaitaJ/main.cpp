#include <iostream>
using namespace std;
/*
CSC 134
M4T3 - Three Loops
SustaitaJ
10/9/23

Tasks:
make 3 loops

- 1 for loop
- 2 while loop
- 3 sentinel loop

*/
int main()
{
    const int NUM_DAYS = 5;
    int todays_cars;
    int total_cars = 0;
    double average = 0.0;
    cout << "Part 1: Counting loop with for" << endl;
    cout << "How many cars did you see each day?" << endl;
    for (int i = 0; i < NUM_DAYS; i = i+1){
        cout << "DAY# " << i << ": ";
        cin >> todays_cars;
        total_cars += todays_cars;
    }
    cout << "Total cars seen was: " << total_cars;
    cout << " over " << NUM_DAYS << " days" << endl;
    average = (double) total_cars / NUM_DAYS;
    cout << "Average per day = " << average << endl;
    cout << endl;

    cout << "Part 2: Count with while" << endl;

    total_cars = 0;
    int i = 0;
    while (i < NUM_DAYS) {
        cout << "DAY# " << i << ": ";
        cin >> todays_cars;
        total_cars += todays_cars;
        i += 1;
    }
    cout << "Total cars seen was: " << total_cars;
    cout << " over " << NUM_DAYS << " days" << endl;
    average = (double) total_cars / NUM_DAYS;
    cout << "Average per day = " << average << endl;
    cout << endl;

    cout << "Part 3: Count with Sentinel" << endl;
    cout << "Enter how many cars you saw per day." << endl;
    cout << "or -1 to finish." << endl;
    bool keep_going = true;
    int day = 0;
    total_cars = 0;
    while (keep_going) {
        cout << "DAY# " << day << ": ";
        cin >> todays_cars;
        if(todays_cars == -1){
            cout << "OK, Done" << endl;
            keep_going = false;
        }
        else {
            total_cars += todays_cars;
            day += 1;
        }
    }

    cout << "Total = " << total_cars << " cars" << endl;
    average = (double) total_cars / day;
    cout << "Average per day = " << average << endl;
    cout << endl;
    return 0;
}
