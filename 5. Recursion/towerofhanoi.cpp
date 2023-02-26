#include <iostream>
#include <stdio.h>
using namespace std;

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("(%d, %d)\n", A, C);
        TOH(n - 1, B, A, C);
    }
}
int f(int &x, int c)

{

    c = c - 1;

    if (c == 0)
        return 1;
    x = x + 1;
    return f(x, c) * x;
}
int main()
{
    // TOH(3, 1, 2, 3);
    int a = 5, b = 5;
    cout << f(a, b);
    return 0;
}