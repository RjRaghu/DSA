#include <iostream>
using namespace std;
int main()
{
    int netsalary, basicS, allowance, deduction;
    cout << "Enter Basic salary\n";
    cin >> basicS;
    cout << "Enter the percantage allowance\n";
    cin >> allowance;
    cout << "Enter the percentage of deduction\n";
    cin >> deduction;
    netsalary = basicS + basicS * allowance / 100 - basicS * deduction / 100;
    cout << "The net salary is " << netsalary;
}