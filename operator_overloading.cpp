#include <iostream>
using namespace std;
class complex
{
private:
public:
    int real;
    int img;
    complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    }
    complex operator+(complex c)
    /*there is function #c1.add(c2) to add numbers which we enhanced into adding 
    complex number which is nothing but operator overlaoding which can be acceses
     furhter with '+' for complex number

    */
    {
        complex temp;
        temp.real = this->real + c.real;
        temp.img = this->img + c.img;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    cout << "Enter the first complex number: ";
    cin >> c1.real >> c1.img;
    cout << "Enter the second complex number: ";
    cin >> c2.real >> c2.img;
    c3 = c1 + c2;
    cout << "The sum of the complex number is: "<<"\n" << c3.real << " + " << c3.img << "i";
}