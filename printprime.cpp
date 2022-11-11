#include <iostream>

using namespace std;

int main()
{
    int n,count=0,i;
    cout<<"Enter the number till you want prime numbers to be printed: ";
    cin>>n;
    for(i=2;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count<=2){
            cout<<i<<", ";
            }
            count =0;
    }
    return 0;
}