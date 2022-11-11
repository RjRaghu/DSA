#include <iostream>
using namespace std;
class rectangle
{
private:
public:
    int length, breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return (length + breadth) * 2;
    }
};
int main()
{
    rectangle r;
    rectangle *p;
    rectangle *ptr = new rectangle;//memory allocated in heap used for dyanmic memory allocation;
    p = &r;//memory allocated in stack for line 19 20 22
    cout << "Enter the lenght and breadth for first rectangle: " << endl;
    cin >> p->length >> p->breadth;
    cout << "The area of the first rectangle is: " << p->area() << endl;
    cout << "Enter the lenght and breadth for second rectangle: " << endl;
    cin >> ptr->length >> ptr->breadth;
    cout << "The area of the second rectangle is: " << ptr->area();
    return 0;
}