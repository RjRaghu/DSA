#include <iostream>
using namespace std;
class student_class
{
private:
    int roll_no;
    string name;
    int pmarks;
    int cmarks;
    int mmarks;

public:
    student_class(int r, string n, int p, int c, int m)
    {
        roll_no = r;
        name = n;
        pmarks = p;
        cmarks = c;
        mmarks = m;
    }
    int total_marks()
    {
        return (pmarks + cmarks + mmarks);
    }
    char grade()
    {
        int average = (pmarks + cmarks + mmarks) / 3;
        if (average <= 40)
        {
            return 'F';
        }
        else if (average > 40 && average <= 60)
        {
            return 'D';
        }
        else if (average > 60 && average <= 70)
        {
            return 'C';
        }
        else if (average > 70 && average <= 90)
        {
            return 'B';
        }
        else if (average > 90 && average <= 100)
        {
            return 'A';
        }
    }
};
int main()
{
    int roll_no;
    string name;
    int pmarks;
    int cmarks;
    int mmarks;
    cout << "Enter the roll no: ";
    cin >> roll_no;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the marks of three subjects: " << endl;
    cin >> pmarks >> cmarks >> mmarks;
    student_class s(roll_no, name, pmarks, cmarks, mmarks);
    cout << "The total marks are: " << s.total_marks() << endl;
    cout << "Your Grade is: " << s.grade() << endl;
    return 0;
}