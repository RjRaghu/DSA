#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Enter a,b,c\n";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "The roots are real and equal";
    }
    else if (d > 0)
    {
        cout << "The rooots are real and distinct";
    }
    else
        cout << "The roots are imaginary and distinct";
}