#include <iostream>
using namespace std;
int fib(int n)
{
    if (n <= 2)
    {
        return n-1 ;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cout<<"Enter the term of fibbonaci series you want: ";
    cin>>n;
    cout<<fib(n);
}