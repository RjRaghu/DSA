#include <iostream>

using namespace std;

int main()
{
    int a,b,gcd=1;
    cout<<"Enter the numbers of which you want gcd: ";
    cin>>a>>b;
    if(a>b){
    for(int i=2;i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
        
    }
    }
      if(b>a){
    for(int i=2;i<=a;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }}}
        cout<<"The gcd of "<<a<<" and "<<b<<" is "<<gcd;
    
    return 0;
}