/*#include <iostream>
using namespace std;

int* input(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return a;
}
void print(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\t';
    }
}


void AboveAvg(int* arr, int n)
{
    double avg = 0;
    for (int i = 0; i < n; i++)
        avg += arr[i];
    avg = avg / n;


    for (int i = 0; i < n; i++)
        if (arr[i] > avg)
            cout << arr[i] << " ";
}

int main()
{

    input(n);
    print(arr, n);
    AboveAvg(arr, n);
    return 0;
}*/