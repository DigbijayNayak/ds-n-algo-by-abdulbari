#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int A[], int n){
    int i;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] <<" ";
    }
    
}
int * fun2(int n){
    int *p;
    p = (int *)malloc(sizeof(int) * 5);
    return p;
}
int main(){
    int A[] = {10, 23, 42, 53, 78};
    fun(A, 5);

    int *B;
    B = fun2(5);
}