#include <iostream>
using namespace std;
int main()
{
    int n, r, num = 0;
    cout << "Enter the number\n";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        num = num * 10 + r;
        n = n / 10;
    }
    for (int i = num; i > 0; i = i / 10)
    {
        switch (i % 10)
        {
        case 1:
            cout << "one ";
            break;
        case 2:
            cout << "two ";
            break;
        case 3:
            cout << "three ";
            break;
        case 4:
            cout << "four ";
            break;
        case 5:
            cout << "five ";
            break;
        case 6:
            cout << "six ";
            break;
        case 7:
            cout << "seven ";
            break;
        case 8:
            cout << "eight ";
            break;
        case 9:
            cout << "nine ";
            break;
        case 0:
            cout << "zero ";
            break;

        default:
            break;
        }
    }
    return 0;
}