#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// void fun(struct Rectangle r){
//     r.length = 20;
//     cout << "length: " << r.length << endl;
//     cout << "breadth: " << r.breadth << endl;
// }

struct Rectangle *fun(){
    struct Rectangle *p;
    p = new Rectangle();
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 20;
    p->breadth = 45;

    return p;
}

int main(){
    //02
    struct Rectangle *ptr = fun();
    cout << "length: " << ptr->length << endl
         << "beadth: " << ptr->breadth << endl;

    //01
    // struct Rectangle r={10, 5};
    // fun(r);
    // printf("%d\n%d\n", r.length, r.breadth);

    return 0;
}