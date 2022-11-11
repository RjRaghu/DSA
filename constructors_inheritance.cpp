#include <iostream>
using namespace std;
class base
{
private:
    /* data */
public:
    base()
    {
        cout << "default of base : " << endl;
    }
    base(int x)
    {
        cout << "param of base: " << x << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "default of derived " << endl;
    }
    derived(int a)
    {
        cout << "param of derived  " << a << endl;
    }
    derived(int x, int a) : base(x)
    {
        cout << "param of derived: " << a << endl;
    }
};
int main()
{
    derived d;
    derived(10);
    derived(2, 3);
}