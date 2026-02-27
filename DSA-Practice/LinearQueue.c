#include <stdio.h>
#include<stdlib.h>
#define N 10
struct Queue
{
    int item[N];
    int rear;
    int front;
};
/*******************/
struct Queue Q;
/*******************/
int Initialise()
{
    Q.rear = -1;
    Q.front = 0;
    return 0;
}
/*******************/
int Enqueue(int x){
    if (Q.rear == N-1){
        printf("Queue is overflow");
        exit(1);}
    else{
        Q.rear++;
        Q.item[Q.rear]=x;
    }
    return 0;
}
/*******************/
int Dequeue(){
    if (Q.rear - Q.front+1==0){
        printf("Queue is underflow");
        exit(1);}
    else{
        int x =Q.item[Q.front];
        Q.front++;
        return x;
    }
}
int main(){
    Initialise();
    Enqueue(100);
    Enqueue(200);
    Enqueue(300);
    Enqueue(400);
    Enqueue(500);
    Enqueue(600);
    printf("\nDeleted element is:=> %d",Dequeue());
    printf("\nDeleted element is:=> %d",Dequeue());
    return 0;
}
