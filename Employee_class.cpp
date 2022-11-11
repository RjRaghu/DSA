#include <iostream>
using namespace std;
class Employee
{
private:
    int eid;
    string name;

public:
    Employee(int e, string n)
    {
        eid = e;
        name = n;
    }
    void setId(int e)
    {
        eid = e;
    }
    void setName(string n)
    {
        name = n;
    }
    int getId()
    {
        return eid;
    }
    string getName()
    {
        return name;
    }

    
};
class fulltimeEmployee : public Employee
{
private:
    int salary;

public:
    fulltimeEmployee(int e, string n, int s) : Employee(e, n)
    {
        salary = s;
    }
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
    
};

class parttimeEmployee : public Employee
{
private:
    int wage;

public:
    parttimeEmployee(int e, string n, int w) : Employee(e, n)
    {
        wage = w;
    }
    void setWage(int w)
    {
        wage = w;
    }
    int getWage()
    {
        return wage;
    }
    
};
int main()
{
    parttimeEmployee p1(1, "John", 1000);
    fulltimeEmployee p2(2, "Raj", 50000);
    cout << "Salary of " << p2.getName() << " is" << p2.getSalary() << endl;
}