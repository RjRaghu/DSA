#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter number\n";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "The entered number is even";
    }
    else
        cout << "The entered number is odd";
}