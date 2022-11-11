#include <iostream>
using namespace std;
class car
{
private:
    /* data */
public:
    virtual void start()
    {
        cout << "car started";
    }
     virtual void stop()=0;/*now this is pure virutal function and it is only used to achieve polymorophism
                           and the classes will be known as abstract classes. It is just used to
                           over ride the function in child class.  */
};

class swift : public car
{
private:
    /* data */
public:
    void start()
    {
        cout << "swift started" << endl;
    }
    void stop(){
        cout<<"Now it will stop";
    }
};
class Innova : public car
{
private:
    /* data */
public:
    void start()
    {
        cout << "Innova started";
    }
};
int main()
{
    car *c;
    c = new swift;
    c->start(); /* We can define polymorphism as the ability of a message to be displayed in more
                 than one form. In this case start function is used to display different messages
                 using the same function or syntax.
                 it describes the concept that you can access objects of different types
                 through the same interface.*/
    c = new Innova;
    c->start();
}
