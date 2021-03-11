/*#include <iostream>
#include<stdio.h>
#include<windows.h>
#include <cstdlib> 
using namespace std;
int function(int n1) {
    int f= 1;
    for (int k= 1; k <= n1; k++) {
        f *= k;
    }
    return f;
}
int recurs(int n2) { 
    int a, b = 0;
    a = 2 + 1;//a1
    for (int k = 2; k <= n2; k++) {
        b = a;
        a = 2 * b + function(k);
    }
    cout << a;
    return 0;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n2;
    cout << "¬вед≥ть число " << endl;
    cin >> n2;
    recurs(n2);
    return 0;
}*/

/*INPUT: 7
OUTPUT: 7504*/
/*INPUT: 2
OUTPUT: 8*/
