#include <iostream>
using namespace std;
class shape
{
private:
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};
class rectangle : public shape
{
private:
    float length, breadth;

public:
    rectangle(float l = 1, float b = 1)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};
class circle : public shape
{
private:
    float radius;

public:
    circle(float r = 1)
    {
        radius = r;
    }
    float area()
    {
        return (radius * (3.1425) * radius);
    }
    float perimeter()
    {
        return (2 * (3.1425) * radius);
    }
};
int main()
{
    shape *s;
    s = new rectangle(10, 2);
    cout << "The area of rectangle is: " << s->area() << endl;
    cout << "The perimeter of rectangle is: " << s->perimeter() << endl;
    s = new circle(5);
    cout << "The area of circle is: " << s->area() << endl;
    cout << "The circumference of circle is: " << s->perimeter() << endl;
}