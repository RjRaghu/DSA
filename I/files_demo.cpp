#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // string st="RJ Bhai ",st2="Kaise ho?";
    // ofstream out("O.txt");
    // out<<st;
    // out<<st2;
    string st;
    cout << "Enter the string you want to enter:\n";
    ofstream out("O.txt");
    getline(out,st);
    out << st;

    ifstream in("O.txt");

    getline(in, st);
    cout << st;
    getline(in, st);
    cout << st;
}