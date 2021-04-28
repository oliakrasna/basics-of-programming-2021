#include <iostream> 
using namespace std;

int main()
{
    int m;
    int k = 0;
    cout << "enter m=";
    cin >> m;
    int i = 0;
    do {
        k++;
    } while (pow(4, k) < m);


    cout << "k=" << k - 1 << endl;

    int v = k - 1;
    int l;
    bool Prime = true;

    for (l = 2; l <= (sqrt(abs(v))); l++)
    {
        if (v % l == 0)
        {
            Prime = false;
            break;
        }

    }
    if (Prime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    return 0;

}