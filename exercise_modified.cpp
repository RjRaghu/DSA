#include<iostream>
using namespace std;
class employee{
private:
    int eid;
    string ename;
public:
    employee() {};  //Defined a default constructor for employee class
    employee(int i,string n){
        eid=i;
        ename=n;
    }
    
    //Function for getting ID from user
    int setID() {
        cout<<"\nEnter the employee ID: "; cin>>eid;
    }

    //Function  fot geting Name from user
    int setName() {
        cout<<"\nEnter the employee Name: "; cin>>ename;
    }

    int getID(){
        return eid;
    }
    string getName(){
        return ename;
    }
};
class fulltimeWorker:public employee{
private:
    int salary;
public:
    fulltimeWorker() {};   //Defined a default constructor for fulltimeWorker class
    fulltimeWorker(int i,string n,int sal):employee(i,n){
        salary=sal;
    }
    
    //Function for getting Salary from user
    int setSalary() {
        cout<<"\nEnter the salary of the employee: "; cin>>salary;
    }

    int getSalary(){
        return salary;
    }
};

class DailyWorkers : public employee{
private:
    int wages;
public:
    DailyWorkers() {};  //Defined a default constructor for DailyWorkers class
    DailyWorkers(int i,string n,int w) :employee(i,n){
        wages=w;
    }


    //Function for getting Wages from user
    int setWages() {
        cout<<"\nEnter the wages of the employee: "; cin>>wages;
    }

    int getWages(){
        return wages;
    }
};
int main()
{  
    // fulltimeWorker f(420,"poonam",30000);
    //DailyWorkers   d(69,"manoj",950);
 
    fulltimeWorker a;
    DailyWorkers b;
    a.setID(); a.setName(); a.setSalary(); //Getting Data from user for fulltime worker
    b.setID(); b.setName(); b.setWages();   //Getting Data from user for part-time worker

    //cout<<"the name of employee:"<<f.getName()<<" ,salary "<<f.getSalary()<<" ,ID: "<<f.getID()<<endl;
    //cout<<"the name of employee:"<<d.getName()<<" ,daily wages "<<d.getWages()<<" ,ID: "<<d.getID()<<endl;
    

    //Displaying Data of Both the employees
    cout<<"\n.......Full Time Employee:......."
        <<"\nName: "<<a.getName()
        <<"\nID: "<<a.getID()
        <<"\nSalary: "<<a.getSalary()

        <<"\n\n......Daily Worker:......"
        <<"\nName: "<<b.getName()
        <<"\nID: "<<b.getID()
        <<"\nSalary: "<<b.getWages();
 
 
    cout<<endl;
    return 0; 
}

//End Notes
/*
    Since employee class is inherited among both the fulltimeWorker class and DailyWorker class,
    we only need to define functions to get salary and Wages in their respective classes. 
    And since we didn't used the paramarized constructor despite it being defined, 
    we needed to overload it with a default constructor. So I just left a blank constructor in every class. 
*/
