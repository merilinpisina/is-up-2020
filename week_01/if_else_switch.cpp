#include <iostream>
using namespace std;
int main(){

    if (20 > 18) {
        cout << "20 is greater than 18\n";
    }

    int time = 22;
    if (time < 10) {
    cout << "Good morning.";
    } else if (time < 20) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }
    cout << endl;
    // Outputs "Good evening."

    // Short Hand If...Else (Ternary Operator)
    // variable = (condition) ? expressionTrue : expressionFalse;
    time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << endl;

    // Switch:
    int day = 4;
    switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    default: //  The default keyword must be used as the last statement in the switch, and it does not need a break.
        cout << "Sunday";
    }
    cout << endl;
    // Outputs "Thursday" (day 4)

    return 0;
}