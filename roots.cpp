#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, x, y;
    cout << "Enter a, b, c where a is coeff of x^2, b is coeff of x and c is constant\n";
    cin >> a >> b >> c;
    x = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);
    y = (-b - sqrt(b * b - (4 * a * c))) / (2 * a);
    cout << "The roots of the equation are " << x << "," << y;
    return 0;
}
