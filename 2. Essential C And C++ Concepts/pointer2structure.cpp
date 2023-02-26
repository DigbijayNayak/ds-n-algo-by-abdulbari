#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    // 02

    Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // p = new Rectangle; // in C++
    p->length = 15;
    p->breadth = 8;
    cout << p->length << endl;
    cout << p->breadth << endl;

    // 01
    // Rectangle r1 = {10, 5}; // in c struct keyword is mandatory but in c++ optional
    // cout << r1.length << endl;
    // cout << r1.breadth << endl;

    // Rectangle *p = &r1;
    // cout << (*p).length << endl;
    // cout << (*p).breadth << endl;

    return 0;
}