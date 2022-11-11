#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    int getlength() { return length; }
    int getbreadth() { return breadth; }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return (length + breadth) * 2;
    }
};
class cuboid : public rectangle
{
private:
    int height;

public:
    cuboid(int h = 1)
    {
        height = h;
    }
    void setheight(int h)
    {
        height = h;
    }
    int getheight()
    {
        return height;
    }
    int volume()
    {
        return (height * getlength() * getbreadth());
    }
};
int main()
{
    rectangle r;
    cuboid c;
    c.setlength(10);
    c.setbreadth(2);
    cout << c.area() << endl;
    cout << c.perimeter() << endl;
    c.setheight(100);
    cout << "This is me and I know how to program inheritence: " << c.volume();
}