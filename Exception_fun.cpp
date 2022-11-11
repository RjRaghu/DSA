#include <iostream>
using namespace std;
int division(int x, int y)
{
    if (y == 0)
    {
        throw 1;
    }
    else
        return x/ y;
}
int main()
{
int a=5,b=0;
        int c;
    try
    {
        c =  division(5,0);
        cout<< c;
    }
    catch (int e)
    {
        cout << "Error " << e << endl
             << "Not divisible by '0'";
    }
}