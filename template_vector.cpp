#include <iostream>
using namespace std;
template <class T>
class vector
{
private:
    T *arr;
    int size;

public:
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    void setarr()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    T dot_product( vector v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * v.arr[i];
        }

        return d;
    }
};
int main()
{
    vector <float> v1(3);
    vector <float> v2(3);
    cout << "Enter the values of array" << endl;
    v1.setarr();
    v2.setarr();
    cout << "The dot product is: " << v1.dot_product(v2);
    return 0;
}
