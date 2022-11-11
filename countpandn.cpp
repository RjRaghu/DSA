//count positive and negative numbers of an array
#include <iostream>
using namespace std;
int main()
{
    int n = 10, A[10], countp = 0, countn = 0;
    cout << "Enter the Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= 0)
        {
            countp++;
        }
        else
            countn++;
    }
    cout << "The positive numbers are " << countp << "\n";
    cout << "The negative numbers are " << countn;
    return 0;
}
