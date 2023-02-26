#include <iostream>
#include <stdio.h>
using namespace std;

template<class T>
class Rectangle
{
private:
    T length;
    T breadth;

public:
    Rectangle()
    {
        length = breadth = 1;
    };
    Rectangle(T l, T b);
    T area();
    T perimeter();
    T getLength()
    {
        return length;
    }
    void setLength(T l)
    {
        length = l;
    }
    ~Rectangle();
};

template<class T>
Rectangle<T>::Rectangle(T l, T b)
{
    length = l;
    breadth = b;
}
template<class T>
T Rectangle<T>::area()
{
    return length * breadth;
}

template<class T>
T Rectangle<T>::perimeter()
{
    return 2 * (length + breadth);
}
template<class T>
Rectangle<T>::~Rectangle()
{
    cout << "Constructor Destroyed";
}

int main()
{
    Rectangle<int> r(10, 5);
    cout << r.area() << endl
         << r.perimeter() << endl;
    r.setLength(20);
    cout << r.getLength()<<endl;
}
