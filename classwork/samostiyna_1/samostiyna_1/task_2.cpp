#include <iostream>
using namespace std;
int main() {
    int a; 
    int b;
    int max;
    int result;
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    max = (a > b) ? a : b;
    for (int i = max; 1 == 1; i++)
        if (i % a == 0 && i % b == 0)
        {
            result = i;
            break;
        }
    cout << "(" << result << ")";
        
    return 0;
}
 //a=6
//b=10
//(30)

