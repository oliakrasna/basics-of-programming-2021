#include <iostream>
using namespace std;

int main1() {
    char input, alfavit = 'A';
    int n;
    cout << "Enter n =  "; cin >> n;

    for (int i = 1; i <= (n + 1); ++i)
    {
        for (int f = 1; f <= i; ++f)
        {
            cout << alfavit << " ";
        }
        ++alfavit;
        cout << endl;

    }
    return 0;
}
  //n=4
  //A
  //B B
  //C C C
  //D D D D
 
  //Ось піраміда літер з відповідною кількістю рядків
    

