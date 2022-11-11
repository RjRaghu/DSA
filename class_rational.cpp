#include <iostream>
using namespace std;
class rational
{
private:
    int p;
    int q;

public:
    rational(int p1 = 0, int q1 = 1)
    {
        p = p1;
        q = q1;
    }
    void setp(int p1)
    {
        p = p1;
    }
    void setq(int q1)
    {
        q = q1;
    }
    rational operator+(rational r)
    {
        rational temp;
        temp.p = p * r.q + q * r.p;
        temp.q = q * r.q;
        return temp;
    }
    friend ostream &operator<<(ostream &os, rational &r);
};
ostream &operator<<(ostream &os, rational &r)
{
    os << r.p << "/" << r.q;
    return os;
}
int main()
{
    rational r1, r2, r3;
    int p, q, p1, q1;
    cout << "Enter the p for r1: " << endl;
    cin >> p;
    cout << "Enter the q for r1: " << endl;
    cin >> q;
    cout << "Enter the p for r2 " << endl;
    cin >> p1;
    cout << "Enter the q for r2: " << endl;
    cin >> q1;
    r1.setp(p);
    r1.setq(q);
    r2.setp(p1);
    r2.setq(q1);
    r3 = r1 + r2;
    cout << r3;
    return 0;
}