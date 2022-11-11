// program to search any key from an aray
#include <iostream>
using namespace std;
int main()
{
    int n = 10, key, A[10];
    cout << "Enter the Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the key\n";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            cout << "The key is found at " << i << " position";
            return 0;
        }
    }

    cout << " Bhai yeh kya kr rha hai tu!";
    return 0;
}