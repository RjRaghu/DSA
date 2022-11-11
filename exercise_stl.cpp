#include <iostream>
#include <fstream>
#include <vector>
#include<iterator>
using namespace std;
class shop
{
public:
    string name;
    float price;
    int qty;

public:
    shop(){};
    shop(string n, float p, int q)
    {
        name = n;
        price = p;
        qty = q;
    }
    friend ofstream &operator<<(ofstream &out, shop &s);
    friend ifstream &operator>>(ifstream &in, shop &s);
    friend ostream &operator<<(ostream &os, shop &s);
};
ofstream &operator<<(ofstream &out, shop &s)
{
    out << s.name << endl
        << s.price << endl
        << s.qty;
    return out;
}
ifstream &operator>>(ifstream &in, shop &s)
{
    in >> s.name >> s.price >> s.qty;
    return in;
}
ostream &operator<<(ostream &os, shop &s)
{
    os << s.name << endl
       << s.price << endl
       << s.qty << endl;
    return os;
}
int main()
{
    string name;
    float price;
    int qty;
    int n;
    cout << "Enter the number of items:\n";
    cin >> n;
    vector<shop> *list;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of the item no " << i + 1 << endl;
        cin >> name;
        cout << "Enter the price of the item no " << i + 1 << endl;
        cin >> price;
        cout << "Enter the Quantity of the item no " << i + 1 << endl;
        cin >> qty;
        list.push_back(new shop(name, price, qty));
    }
    ofstream out("Shop.txt");
    vector<shop>::iterator i;
    for (i = list.begin(); i != list.end(); i++)
    {
        out << *i << endl;
    }
    shop s;
    ifstream in("Shop.txt");
    for (int i = 0; i < n; i++)
    {
        in >> s;
        cout << "Item no: " << i + 1 << endl
             << s << endl;
    }
    return 0;
}