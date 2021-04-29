/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string String;
    cout << "Sentence: ";
    getline(cin, String);
    cout << String << endl;
    int len = String.length();
    for (int i = 0; i < len; i++)
    {
        if (typeid(i) == typeid(char(i))) {
            String.erase(i);
        }
    }
    cout << String << endl;
    return 0;
}*/