#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the two numbers\n";
    cin >> n >> m;
    while (n != m)
    {
        if (n > m)
        {
            n = n - m;
        }
        else if (n < m)
        {
            m = m - n;
        }
    }
    cout << "The gcd is " << m;
}