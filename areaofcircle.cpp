#include <iostream>
using namespace std;
int main()
{
    float r, area;
    cout << "Enter the radius of circle you want area for\n";
    cin >> r;
    area = 3.1425f * (r * r);
    cout << "The area of the circle is " << area;
    return 0;
}
