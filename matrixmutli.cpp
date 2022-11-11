#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2, sum=0;
    cout << "Enter the number of rows and columns of 1st Matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns of 2nd Matrix: ";
    cin >> r2 >> c2;
    int a[r1][c1], b[r2][c2], c[r1][c1];
    if (r1 != c2)
    {
        cout << "The Multiplication of the Matrices is not possibles";
    }
    else cout << "Enter the elements of the 1st Matrix: ";
    int result[r1][c2];
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
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    cout << "The multiplied Matrix is:... "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}