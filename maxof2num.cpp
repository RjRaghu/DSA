#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number\n";
    cin >> a;
    cout << "Enter the number\n";
    cin >> b;
    if (a > b)
    {
        cout << "The greater number is " << a;
    }
    else if (b > a)
    {
        cout << "The greater number is " << b;
    }
    else
        cout << "Both are equal";
}