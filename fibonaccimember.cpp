#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 1, t2 = 1, nexterm=0;
    cout << "Enter the number: ";
    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << "True";
        return 0;
    }
    while (nexterm < n)
    {
        nexterm = t1 + t2;
        t1 = t2;
        t2 = nexterm;
    }
    if (nexterm == n)
    {
        cout << "true";
        return 0;
    }

    cout << "False mf!";
}