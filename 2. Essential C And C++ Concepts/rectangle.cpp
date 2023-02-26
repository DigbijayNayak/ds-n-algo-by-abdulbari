#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x; //padding of memory, it will take 4 byte of memory but use only one byte of memory
}; // r1, r2, r3; // directly declaring along with definition global to all function
// struct Rectangle r1, r2, r3;//global to all function
int main()
{
    struct Rectangle r1 = {10, 5}; // local to this function

    r1.length = 15;
    r1.breadth = 25;

    printf("%lu \n", sizeof(r1));
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    return 0;
}