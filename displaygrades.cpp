#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3, total, avg;
    cout << "Enter the marks \n";
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    avg = total / 3;
    if (avg >= 60)
    {
        cout << "Your grades are very bad A";
    }
    else if (avg < 60 && avg >= 35)
    {
        cout << "Your grades are decent B";
    }
    else
        cout << "Congratulations you are a failure!!!...";
    return 0;
}