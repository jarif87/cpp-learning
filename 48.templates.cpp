#include <iostream>
using namespace std;

template <typename T>
class Vector
{

public:
    T *arr;
    int size;
    Vector(int s)
    {
        size = s;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 1.0;
    v1.arr[1] = 0.0;
    v1.arr[2] = -1.0;
    Vector<float> v2(3);
    v2.arr[0] = 0.0;
    v2.arr[1] = 1.0;
    v2.arr[2] = 0.0;
    float result = v1.dotProduct(v2);
    cout << "Dot Product: " << result << endl;

    return 0;
}