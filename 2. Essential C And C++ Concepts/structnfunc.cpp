#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

int area(Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(Rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}

int main()
{
    struct Rectangle r={0, 0};
    printf("Enter Length and Breadth: ");
    int l, b;
    cin >> l >> b;
    initialize(&r, l, b);
    int ar = area(r);
    int peri = perimeter(r);

    printf("Area: %d\nPeri: %d\n", ar, peri);

    return 0;
}