//Descending order Array Implementation
#include <stdio.h>
#include <stdlib.h>
/***********************/
int N;
int ArrayInsert(int *A,int i,int x)
{
    int j;
    for (j=N-1;j>=i;j--){
        A[j+1]=A[j];
    }
    A[i]=x;
    return 0;
}
/*********************/
int ArrayDelete(int *A)
{
    int i;
    for (i=0;i<N;i++){
        A[i-1]=A[i];
    }
    return 0;
}
/*******************/
int EnQueue(int *A,int x)
{
    int i =0;
    while (i<N && x<A[i]){
        i++;
    }
    ArrayInsert(A,i,x);
    N++;
    return 0;
}
/*****************/
int Display(int *A)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("\t%d",A[i]);
    }
    return 0;
}
/**********************/
int DeQueue(int *A)
{
    int x,i;
    x=A[N-1];
    N--;
    return x;
}
int main()
{
    int A[100];
    N=0;
    EnQueue(A,89);
    EnQueue(A,23);
    EnQueue(A,45);
    EnQueue(A,7);
    EnQueue(A,8);
    Display(A);
    printf("\nDeleted Element from Queue is: %d",DeQueue(A));
    printf("\nDeleted Element from Queue is: %d",DeQueue(A));
    printf("\nDeleted Element from Queue is: %d",DeQueue(A));
}