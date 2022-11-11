#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout << "Enter hour\n";
    cin >> hour;
    if (hour >= 9 && hour <= 18)
    {
        cout << "It is a working hour";
    }
    else
        cout << "It is a non working hour";
}