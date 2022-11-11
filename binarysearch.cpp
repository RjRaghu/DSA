#include <iostream>
using namespace std;
int main()
{
    int key, l = 0, mid, n = 10, h = n - 1;
    int arr[n] = {2, 3, 4, 6, 7, 9, 11, 23, 35, 46};
    cout << "Enter the key you want to search: ";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            cout << "Found at " << mid;
            return 0;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << "Not found";
}