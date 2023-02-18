#include <iostream>
#include <stdio.h>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x = 10;
    int y = 8;
    int z = add(x, y);
    cout << z << endl;
    return 0;
}