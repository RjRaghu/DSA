#include <iostream>
using namespace std;
class outer
{
private:
    class Inner
    {
    public:
        void fun()
        {
            cout << "Display of Inner class" << endl;
        }
    };

public:
    void display()
    {
        cout << "Display of Outer class" << endl;
        i.fun();
    }
    Inner i;
};
int main(){
    outer o;
    o.display();
}
