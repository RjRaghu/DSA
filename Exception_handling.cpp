#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the values: " << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw 101;
        }
        else
            c = a / b;
        cout << c;
    }
    catch (int e)
    {
        cout << "Error " << e << endl
             << "Not divisible by '0'";
    }
}