#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        int p = i + 1;
        for (int j = 0; j <= i; j++)
        {
            cout << p;
            p--;
        }
        p = p + 2;
        for (int q = 0; q <= i - 1; q++)
        {
            cout << p;
            p++;
        }
        cout << endl;
    }
}