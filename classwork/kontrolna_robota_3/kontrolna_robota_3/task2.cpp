/*#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
vector<string> split(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos - prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    } while (pos < str.length() && prev < str.length());
    return tokens;
}
int main()
{
    string studentA;
    string studentB;
    ifstream fin1("in1.txt");
    if (fin1.is_open())
    {
        while (getline(fin1, studentA))
        {
            cout << "Include of File in1" << endl;
            cout << studentA << endl;
        }
    }
    fin1.close();
    ifstream fin2("in2.txt");
    if (fin2.is_open())
    {
        while (getline(fin2, studentB))
        {
            cout << "Include of File in2" << endl;
            cout << studentB << endl;
        }
    }
    fin2.close();
    vector<string> A = split(studentA, " ");
    vector<string> B = split(studentB, " ");
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < B.size(); j++)
        {
            if (A[i] == B[j])
            {
                A[i] = " ";
            }
        }
    }
    ofstream outfile;
    outfile.open("out.txt");
    for (int i = 0; i < A.size(); i++)
    {
        outfile << A[i];
    }
    outfile.close();
}*/