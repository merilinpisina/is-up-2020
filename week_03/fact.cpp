#include <iostream>

using namespace std;

int main (){

    int n, fact = 1;

    cin >> n;
    
    // n! = ?
    for (int i = n; i > 1 ; i --){
        fact *= i;
    }
    cout << n << "! = " << fact <<endl;

    // n! = ?
    int i = n;
    fact = 1;
    while (i > 1){
        fact *= i;
        i --;
    }
    cout << n << "! = " << fact <<endl;

    fact = 1;
    for (i = 1; i <= n; i ++){
        fact *= i;
        cout << i << "! = " << fact <<endl;
    }

    for (i = 1; i <= n; i ++){
        fact = 1;
        for (int j = 1; j <= i; j ++){
            fact *= j;
        }
        cout << i << "! = " << fact <<endl;
    }

    return 0;
}