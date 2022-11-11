#include <iostream>
using namespace std;
template <class T>
T maxim(T a, T b)
{
    return a > b ? a : b;
}
int main()
{
    cout << maxim(5, 1343)<<endl;
    cout << maxim(5.674, 7.343);
    cout<<maxim('A','B');
    return 0;
}