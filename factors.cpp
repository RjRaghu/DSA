#include <iostream>
using namespace std;
int main()
{
    int n, factors;
    cout << "Enter the number you want factors of\n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i<<", ";

        }
    }
    return 0;
}