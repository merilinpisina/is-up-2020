#include <iostream>
using namespace std;
int main(){ 
    cout << "a= ";
    double a;
    cin >> a;

    cout << "b= ";
    double b;
    cin >> b;

    cout << "c= ";
    double c;
    cin >> c;

    bool x = a <= 0 || b <= 0 || c <= 0 || a+b <= c || a+c <= b || b+c <= a;
    if (x) 
        cout << "Not a valid triangle.\n"; 
    else if (a == b && b == c) 
        cout << "An isosceles triangle\n"; 
    else if (a == b || a == c || b == c) 
        cout << "An equilateral triangle\n"; 
    else
        cout << "A triangle with different sides.\n";

    return 0;
}
