#include <iostream>
#include <string>
#include<fstream>
using namespace std;
void capitalize(string& S)
{
    bool cap = true;
    for (unsigned int i = 0; i <= S.length(); i++)
    {
        if (isalpha(S[i]) && cap == true)
        {
            S[i] = toupper(S[i]);
            cap = false;
        }
        else if (isspace(S[i]))
        {
            cap = true;
        }
    }
}
void reverseWords(string s)
{
    string tmp;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }

        else
            str += s[i];

        tmp.push_back(str);

        int i;
        for (i = tmp.size() - 1; i > 0; i--)
            cout << tmp[i] << " ";

        cout << capitalize(tmp[0]) << endl;
    }
}
int main() {
    ofstream fout;
    fout.open("text.txt");
    fout << "hello world" << endl;
    fout.close();
    ifstream fin("text.txt");
    char* text = new char[100];
    fin >> text;
    fin.getline(text, 100);
    cout << text << endl;
    fin.close();
    reverseWords(text);
    return 0;
}