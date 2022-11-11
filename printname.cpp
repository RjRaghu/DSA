#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name\n";
    getline(cin, name);
    cout << "Your name is " << name;
    return 0;
}