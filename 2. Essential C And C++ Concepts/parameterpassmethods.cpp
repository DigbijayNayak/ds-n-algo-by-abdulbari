#include<iostream>
#include<stdio.h>
using namespace std;

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

void swap1(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap2(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int num1 = 10, num2 = 8, sum;
    sum = add(num1, num2); // Call by value
    cout << sum << endl;
    swap1(&num1, &num2);
    cout << num1 << endl;
    cout << num2 << endl;
    return 0;
}