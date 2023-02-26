#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int length = 0, breadth = 0;

    printf("Enter Length and Breadth: ");
    cin >> length >> breadth;

    int area = length * breadth;
    int peri = 2 * (length + breadth);

    printf("Area: %d\nPeri: %d\n", area, peri);

    return 0;
}