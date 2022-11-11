#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "Enter the number till which you want sum\n";
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout << "The sum is " << sum;
    return 0;
}