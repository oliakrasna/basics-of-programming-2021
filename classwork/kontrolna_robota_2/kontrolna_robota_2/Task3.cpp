/*#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of 1-st arry:" << endl;
    cin >> size;
    int* array1 = new int[size];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }
    cout << endl;
    cout << "Our array 1-st arry " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array1[i];
    }
    cout << endl;

    int size2;
    cout << "Enter size or 2-nd arry:" << endl;
    cin >> size2;
    int* array2 = new int[size2];
    cout << "Enter elements of 2-nd arry: " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }
    cout << endl;
    cout << "Our 2-nd arry: " << endl;
    for (int i = 0; i < size2; ++i)
    {
        cout << array2[i];
    }
    cout << endl;

    cout << "New array with deleted elements:";
    for (int i = 0; i < size; i++)
    {
        if (array2[i] != array1[i])
        {
            cout << array1[i];
        }
    }

    return 0;
}*/