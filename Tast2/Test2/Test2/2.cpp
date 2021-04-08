/*#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a matrix size:\n";
    cout << "n = ";
    cin >> n;
    int** a = new int* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }
    cout << "Enter a matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Changed matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[j][n - i - 1] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}*/