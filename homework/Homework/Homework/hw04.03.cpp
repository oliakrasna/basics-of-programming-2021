#include <iostream>
using namespace std;
int prost(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
        else
            return n;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    for (a; a <= b; a++) {
        if (a == prost(a)) {
            cout << a << endl;
        }
    }
    system("pause");
    return 0;
}