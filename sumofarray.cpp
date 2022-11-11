#include <iostream>
using namespace std;
int main()
{
    int n = 10, key, A[10], sum = 0;
    cout << "Enter the Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    cout << "The sum of the array is " << sum;
    return 0;
}