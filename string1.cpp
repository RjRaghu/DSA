#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;

    cout << "Enter the string you want to get converted into upper case and lower case: " << endl;
    getline(cin, s);
    cout<<"The upper cased string: ";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    cout << s << endl;
    

    cout<<"The lower cased string: ";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    cout << s;
}
