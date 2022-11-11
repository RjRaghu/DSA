#include <iostream>
using namespace std;
int main()
{
    int n, factors, sum = 0;
    cout << "Enter the number you want factors of\n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << "The sum for the factors of " << n << " is " << sum<<"...\n";
    if (sum == (2 * n))
    {
        cout << " " << n << " is a perfect number!!";
    }
    else
        cout << " " << n << " is not a perfect number!!";

    return 0;
}