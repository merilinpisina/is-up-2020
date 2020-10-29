#include <iostream> /* is a header file library that lets us work with input and output objects, such 
                    as cout (used in line 5). Header files add functionality to C++ programs. */

using namespace std; // means that we can use names for objects and variables from the standard library.

int main(){ // This is called a function. Any code inside its curly brackets {} will be executed.

    // The compiler ignores white spaces. However, multiple lines makes the code more readable.

    cout<<"Hello, FMI!\n"; // cout (pronounced "see-out") is an object used to output/print text. 

    int number; 
    cout << "Type a number: "; // Type a number and press enter
    cin >> number; // Get user input from the keyboard
    cout << "Your number is: " << number << endl; // Display the input value

    // Sum of 2 integers:
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << endl;

    // Data types:
    int myNum = 5;               // Integer - 4 bytes - Stores whole numbers, without decimals

    float myFloatNum = 5.99;     // Floating point number - 4 bytes - Stores fractional numbers, 
                                 // containing one or more decimals. Sufficient for storing 7 decimal digits

    double myDoubleNum = 9.98;   // Floating point number - 8 bytes - Stores fractional numbers, 
                                 // containing one or more decimals. Sufficient for storing 15 decimal digits

    char myLetter = 'D';         // Character - 1 byte - Stores a single character/letter/number, or ASCII values

    bool myBoolean = true;       // Boolean - 1 byte - Stores true or false values

    string myText = "Hello";     // String - The string type is used to store a sequence of characters (text). 
                                 // This is not a built-in type, but it behaves like one in its most basic usage. 
                                 // String values must be surrounded by double quotes

    /*
    float vs. double
    The precision of a floating point value indicates how many digits the value can have after the decimal point. 
    The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. 
    Therefore it is safer to use double for most calculations.
    */


    return 0; // ends the main function.
}