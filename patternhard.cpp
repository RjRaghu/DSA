#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        int p = i;
        for (int j = 1; j <= i; j++)
        {

            cout << p;
            p++;
        }
        int r = 2 * i - 2;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << r;
            r--;
        }

        cout << endl;
    }
    return 0;
}