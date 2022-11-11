#include <iostream>
using namespace std;
class basic_car
{
private:
    /* data */
public:
   virtual void start()/*A virtual function is a member function that you expect to be redefined in
                         derived classes. When you refer to a derived class object using a pointer
                        or a reference to the base class, you can call a virtual function for that 
                        object and execute the derived class's version of the function.*/
    {
        cout << "This is basic car" << endl;
    }
   
};
class AdvancedCar : public basic_car
{
private:
    /* data */
public:
    void start()  //Over riding the start function here. 
    {
        cout << "This is advanced car";
    }
    
};
int main()
{
    basic_car *ptr = new AdvancedCar();
    //can also be initialized as : AdvancedCar c; and then ptr = &d;
    ptr->start();
}