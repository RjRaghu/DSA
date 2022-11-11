#include <iostream>
using namespace std;
void doublevalue(int *a)
{
*a=2*(*a);
}

int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;
    doublevalue(&a);
    cout << a;
    return 0;
}