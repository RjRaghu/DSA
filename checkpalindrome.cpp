//palindrone for numbers
#include <iostream>
using namespace std;
int main()
{
    int n, r, rev = 0, m;
    cout << "Enter the number\n ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = (rev * 10) + r;
    }

    if (rev == m)
    {
        cout << "The number is a palindrome!";
    }
    else
        cout << "The number is not a palindrome!";
}