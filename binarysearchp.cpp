#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Selection Sorting Section
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "The sorted array is.....";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Binary search section
    int key, mid, l = 0, h = n - 1;
    cout << "Enter the key you want to find: ";
    cin >> key;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            cout << "Found at index: " << mid;
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