// operator overloading using friend function
#include <iostream>
using namespace std;
class complex
{
private:
public:
    int real;
    int img;
    complex(int r = 0, int i = 0)//parametrized constructor
    {
        real = r;
        img = i;
    }
    friend complex operator+(complex c, complex c1);
};
complex operator+(complex c, complex c1) // operator overlaoding
{
    complex temp;
    temp.real = c.real + c1.real;
    temp.img = c.img + c1.img;
    return temp;
}
int main()
{
    complex c1(3, 5);
    complex c2(6, 2);
    complex c3;
    c3 = c1 + c2;
    cout << c3.real << " + " << c3.img << "i";
    return 0;
}