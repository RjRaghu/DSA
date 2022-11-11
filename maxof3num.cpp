#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three numbers\n";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "the greatest number is " << a;
    }
    else if (b > c)
    {
        cout << "The greatest number is " << b;
    }
    else
        cout << "The greatest number is " << c;
}