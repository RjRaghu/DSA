// Check wether the given number is the member of the fibonacci series

#include <iostream>

using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextterm = 0, count = 0;
    cout << "Enter the number which you want to check: ";
    cin >> n;
    while (t1 <= n)
    {
        if (t1 == n)
        {
            cout << "Yes";
            count++;
        }
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    if (count < 1)
    {
        cout << "No";
    }
}
