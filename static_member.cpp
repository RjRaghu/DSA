/* What is static member example?
A typical use of static members is for recording data common to all objects of a 
class. For example, you can use a static data member as a counter to store the 
number of objects of a particular class type that are created.   */

#include<iostream>
using namespace std;
class test
{
private:
    int a,b;
public:
static int count;//static member variable
test(){
    a=10;
    b=10;
    count++;
}
static int getcount(){  //static member function
    return count;
}
};
int test::count=0;
int main(){
   cout<<test::count<<endl;
    test t;
    cout<<t.getcount<<endl;
    cout<<t.count;

}