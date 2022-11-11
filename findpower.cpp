#include <iostream>

using namespace std;

int main()
{
    int n, power, ans = 1;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> power;
    for (int i = 1; i <= power; i++)
    {
        ans = ans * n;
    }
    cout << ans;
    return 0;
}