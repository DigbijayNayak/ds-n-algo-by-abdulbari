#include <iostream>
#include <stdio.h>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }

    int main()
    {
        Rectangle r;
        printf("Enter Length and Breadth: ");
        int l, b;
        cin >> l >> b;
        r.initialize(l, b);
        int ar = r.area();
        int peri = r.perimeter();

        printf("Area: %d\nPeri: %d\n", ar, peri);

        return 0;
    }
};