#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    static int add_no;

public:
    student(string n)
    {
        name = n;
    }
    int getRollno()
    {
        add_no++;
        roll = add_no;
        return roll;
    }
    string getName()
    {
        return name;
    }
};
int student ::add_no = 0;
int main()
{
    student s1("Joe"), s2("Chandler"), s3("Rose"), s4("Barney"), s5("Theodre Mosby");
    cout << "......Details of the students admitted in the School of comedy:....." << endl;
    cout << "Name:" << s1.getName() << endl
         << "Roll no: " << s1.getRollno() << endl;
    cout << "Name:" << s2.getName() << endl
         << "Roll no: " << s2.getRollno() << endl;
    cout << "Name:" << s3.getName() << endl
         << "Roll no: " << s3.getRollno() << endl;
    cout << "Name:" << s4.getName() << endl
         << "Roll no: " << s4.getRollno() << endl;
    cout << "Name:" << s5.getName() << endl
         << "Roll no: " << s5.getRollno() << endl;
}