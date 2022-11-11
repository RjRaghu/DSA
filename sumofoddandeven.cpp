// sum of even and odd numbers in the given integers
#include <iostream>

using namespace std;

int main()
{
    int n, r, sume = 0, sumo = 0;
    cout << "Enter the number: ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        if (r % 2 == 0)
        {
            sume = sume + r;
        }
        else
        {
            sumo = sumo + r;
        }
    }
    cout << "sum of even number is: " << sume << endl;
    cout << "Sum of odd number is: " << sumo;
    return 0;
}