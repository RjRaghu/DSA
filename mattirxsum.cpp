#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2, sum;
    cout << "Enter the number of rows and columns of 1st Matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns of 2nd Matrix: ";
    cin >> r2 >> c2;
    int a[r1][c1], b[r2][c2], c[r1][c1];
    if (r1 != r2 || c1 != c2)
    {
        cout << "The sum is not possible...";
    }
    else
        cout << "Enter the elements of the 1st Matrix: ";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of the 2nd Matrix: ";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            sum = 0;
            sum = a[i][j] + b[i][j];
            c[i][j] = sum;
        }
    }
    cout << "The sum of the Matrices is: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}