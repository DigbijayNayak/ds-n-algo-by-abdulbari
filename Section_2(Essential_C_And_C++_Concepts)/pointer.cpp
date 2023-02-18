#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main(){

    //03

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    //02

    // int *p;
    // // p = (int *)malloc(5 * sizeof(int)); // memory allocated in heap.
    // p = new int[5];
    // p[0] = 12;
    // p[1] = 15;
    // p[2] = 23;
    // p[3] = 24;
    // p[4] = 45;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << endl;
    // }
    
    // 01

    // int a = 10;
    // int A[5] = {2, 4, 6, 8, 9}; // allocated in stack memory
    // int *r;
    // r = A;// r = &A[0]
    // int *p;
    // p = &a;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << r[i] << endl;
    // }
    
    // cout << a << endl;
    // cout << *p << endl;

    //Deallocation of memory
    // delete[] p; //in C++
    // free(p); // in C

    return 0;
}