#include <iostream>

using namespace std;

int main(){

    int n = 10;

    // FOR
    for (int i = 1; i <= n; i ++){
        cout << i << " ";
    }
    cout << endl;

    // WHILE
    int i = 1;
    while (i <= 10){
        cout << i << " ";
        i ++;
    }
    cout << endl;

    // DO WHILE
    i = 1;
    do {
        cout << i << " ";
        i ++;
    }while (i <= 10);
    cout << endl;

    i = 1;
    for (;;) {
        cout << "I'm endless until you stop me!\n";
        i ++;
        if (i > 10){
            break;
        }
    }

    return 0;
}