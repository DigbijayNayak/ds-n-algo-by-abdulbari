#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a = 25;
    int &r = a;
    int b = 30;
    r = b;
    cout << a << endl
         << r << endl;
    return 0;
}