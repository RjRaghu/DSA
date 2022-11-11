#include <iostream>
using namespace std;
int search(int a[],int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << "Key found at the index: " << i<<endl;
         return 0;   
        }
    }
    
            cout << "-1"<<endl;
}

int main()
{
    int a[] = {13, 8, 5, 2, 0, 3, 4, 5, 77877};
    int k;
    cout << "Enter the key you want to search: "<<endl;
    cin >> k;
    search(a,9, k);

    return 0;
}