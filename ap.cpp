#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int count = 0, i = 1; count < n; i++)
    {
        sum = (3 * i + 2);
        if (sum % 4 != 0)
        {
            cout << sum << " ";
            count++;
        }
    }
    return 0;
}
