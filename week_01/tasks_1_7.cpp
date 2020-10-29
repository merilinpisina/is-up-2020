#include <iostream>
using namespace std;
int main () {

    cout << "Task 1:\n";
    int num1, num2;
    cout << "Enter two numbers: \n";
    cin >> num1 >> num2;
    cout << "The greater number is: ";
    cout << ((num1 >= num2)? num1 : num2) << endl;  

    cout << "\nTask 2:\n";
    int number;
    cout << "Enter a number:\n";
    cin >> number;
    if (number > 0 && number < 13) {
        cout << "This is a valid number of a month.\n";
    } else {
        cout << "This is not a valid month.\n";
    }

    cout << "\nTask 3:\n";
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.\n";
            else
                cout << year << " is not a leap year.\n";
        }
        else
            cout << year << " is a leap year.\n";
    }
    else
        cout << year << " is not a leap year.\n";

    cout << "\nTasks 4 & 5:\n";
    cout << "Enter boundaries a and b:\n";
    double a, b, x;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Enter a value:\n";
    cin >> x;
    if (x > a && x < b){
        cout << x << " belongs to the interval (" << a << "," << b << ")\n";
    }
    else {
        cout << x << " does not belong to the interval (" << a << "," << b << ")\n";
    }

    cout << "\nTask 6:\n";
    char c;
    cout << "Enter a symbol: ";
    cin >> c;
    cout << ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z')? 
        "Your symbol is a letter.": "Your symbol is not a letter.") << endl;

    cout << "\nTask 7:\n";
    cout << "Enter a 4-digit number: ";
    cin >> number;
    int mirroredNum = (number%10)*1000 +
                      ((number/10)%10)*100 + 
                      ((number/100)%10)*10 + 
                      number/1000;
    if (number == mirroredNum) {
        cout << number << " is a happy number! :)\n";
    }
    else {
        cout << number << "is not a happy number! :(\n";
    }

    return 0;
}