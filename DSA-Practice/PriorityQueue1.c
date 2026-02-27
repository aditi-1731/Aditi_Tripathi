//Ascending order Array Implementation
#include <stdio.h>
#include <stdlib.h>
/*****************/
int N;
int ArrayInsert(int *A,int i,int x)
{
    int j;
    for(j=N-1;j>=i;j++){
        A[j+1]=A[j];
    }
    A[i]=x;
    return 0;
}
/***********************/
int ArrayDelete(int *A)
{
    int i;
    for (i=0;i<N;i++){
        A[i-1]=A[i];
    }
    return 0;
}
/****************/
int EnQueue(int *A,int x)
{
    int i =0;
    while (i<N && x>=A[i]){
        i++;
    }
    ArrayInsert(A,i,x);
    N++;
    return 0;
}
/***************/
int Display(int *A){
    int i;
    for(i=0;i<N;i++){
        printf("\t%d",A[i]);
    }
    return 0;
}
/****************/
int DeQueue(int *A){
    int x,i;
    x=A[0];
    ArrayDelete(A);
    return x;
}
/**********************/
int main()
{
    int A[100];
    N=0;
    EnQueue(A,3);
    EnQueue(A,34);
    EnQueue(A,35);
    EnQueue(A,36);
    EnQueue(A,37);
    Display(A);
    printf("\nDeleted Element is: %d",DeQueue(A));
    printf("\nDeleted Element is: %d",DeQueue(A));
    printf("\nDeleted Element is: %d",DeQueue(A));
    printf("\nDeleted Element is: %d",DeQueue(A));
}
