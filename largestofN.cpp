#include <iostream>
using namespace std;
int main()
{
    int n, cn, maxn = -100000;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the " << i << " number: ";
        cin >> cn;
        if (cn >= maxn)
        {
            maxn = cn;
        }
    }
    cout << "The largest number is: " << maxn;
    return 0;
}