#include<stdio.h>
#include<stdlib.h>
#define N 10
struct cQueue
{
    int item[N];
    int rear;
    int front;
};
/*******************/
struct cQueue CQ;
/*******************/
int Initialise(){
    CQ.rear = 0;
    CQ.front=0;
    return 0;
}
/*******************/
int Enqueue(int x){
    if ((CQ.rear+1)%N==CQ.front){
        printf("\nQueue overflows");
        exit(1);
    }
    else{
        CQ.rear=(CQ.rear+1)%N;
        CQ.item[CQ.rear]=x;
    }
    return 0;
}
/*******************/
int Dequeue(){
    if (CQ.rear==CQ.front){
        printf("\nQueue underflows");
        exit(1);
    }
    else{
        CQ.front=(CQ.front+1)%N;
        int x = CQ.item[CQ.front];
        return x;
    }
}
int main(){
    Initialise();
    Enqueue(12);
    Enqueue(22);
    Enqueue(32);
    Enqueue(42);
    Enqueue(52);
    Enqueue(62);
    Enqueue(72);
    printf("\nDeleted element is:=> %d",Dequeue());
    printf("\nDeleted element is:=> %d",Dequeue());
}