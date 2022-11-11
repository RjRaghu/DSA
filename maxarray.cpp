// Finding max element from the array
#include <iostream>
using namespace std;
int main()
{
    int n = 10, key, A[10], max = 0;
    cout << "Enter the Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "The max element is " << max;
}