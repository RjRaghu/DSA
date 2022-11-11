#include <iostream>
using namespace std;
int main()
{
    int bill, discounted, discountedamt;
    cout << "Enter the amout of bill:\n";
    cin >> bill;
    if (bill < 100)
    {
        cout << "Aur saaman khareedo discount ke liye!!....";
    }
    else if (bill >= 100 && bill < 500)
    {
        discounted = (bill * 10) / 100;
        discountedamt = bill - discounted;
        cout << "The discount is 10%.... which is " << discounted << ". The discounted amount is " << discountedamt;
    }
    else if (bill >= 500)
    {
        discounted = (bill * 20) / 100;
        discountedamt = bill - discounted;
        cout << "The discount is 20%.... which is " << discounted << ". The discounted amount is " << discountedamt;
    }
}