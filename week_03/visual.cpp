#include <iostream>

using namespace std;

int main() {

// Task 1:
    char c;
    cout << "Enter a character: ";
    cin >> c;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Task 2:\n";
    for (int i = 1; i <= n; i ++){
        for (int j = 0; j < i; j ++){
            cout << c;
        }
        cout << endl;
    }

// Task 2:
    cout << "Task 2:\n";
    char letter = 'A';

    cout << "Enter a number: ";    
    cin >> n;
    for (int i = 1; i <= n; i ++){
        for (int j = 0; j < i; j ++){
            cout << letter << " ";
        }
        cout << endl;
        letter ++;
        if (letter > 'Z'){
            cout << "That was the full alphabet! \n";
            break;
        }
    }

// Task 3:
    cout << "Taks 3:\n";
    int e = 1;
    cout << "Enter a hight value for the triangle: ";
    cin >> n;

    for(int i = 1; i <= n; i ++){
        for(int j = n-1; j >= i; j--){
        cout << " ";  // Printing Space Here
        }
        for(int j = 0; j < e; j ++){
        cout << "*";  // Printing asterisk here
        }
        cout << endl;   // new line
        e = e + 2;
    }

    return 0;
}

/*

Task 1:

Enter a character: w
Enter a number: 5
w
ww
www
wwww
wwwww

*/
