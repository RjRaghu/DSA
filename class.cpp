#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    {
        length = 1;
        breadth = 1;
    }
    rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
            length = 0;
    }
    void setBreadth(int b)
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
            breadth = 0;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return (2 * (length + breadth));
    }
};
int main()
{
    rectangle r1(10, 5), r2(r1);
    cout << r1.area() << endl;
    cout << "The area of the second rectangle is: " << endl;
    cout << r2.area() << endl;
    return 0;
}