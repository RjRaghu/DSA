#include <iostream>
using namespace std;
int far(int fs, int gap, int fe)
{
    int c, sum = fs;
    cout << "Fahrenheit\tCelsius " << endl;
    for (int i = 0; i <= (fe - fs) / gap; i++){
        c = ((sum - 32) * 5) / 9;
    cout << sum << "\t\t" << c << endl;
    
        sum = sum + gap;
    }
    return 0;
}

int main()
{
    int fs, gap, fe;
    cout << "Enter the start and end of table: " << endl;
    cin >> fs >> fe;
    cout << "Enter the gap between the star and end: " << endl;
    cin >> gap;
    far(fs, gap, fe);
    return 0;
}