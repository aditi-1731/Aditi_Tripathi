//Doubly Ended Queue using doubly linked list
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
/*********************/
/*********************/
struct node* front = NULL;
struct node *p;
struct node* rear = NULL;
/***********************/
struct node* GetNode(){
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->prev=NULL;
    p->next=NULL;
    return p;
}
void Initialize(struct node** front,struct node** rear){
    *front =NULL;
    *rear = NULL;
}
/*********************/
int Isempty(struct node* front,struct node* rear){
    if (front == NULL &&  rear==NULL){
        return true;
    }
    else{
        return false;
    }
}
/*************************/
void InsFront(int x){
    p=GetNode();
    p->data=(x);
    p->prev = NULL;
    p->next=front;
    if (front !=NULL){
        front->prev =p;
    }
    else{
        rear =p;
    }
    front =p;
}
/****************************/
void InsRear(int x){
    p =GetNode();
    p->data = x;
    p->next = NULL;
    p->prev =rear;
    if (rear !=NULL){
        rear->next = p;
    }
    else{
        front =p;
    }
    rear=p;
}
/*************************/
int DelFront(){
    int x;
    if (front==NULL){
        printf("Deque underflows\n");
        exit(1);
    }
    else{
        p=front;
        front=front->next;
        if (front !=NULL){
            front ->prev= NULL;
        }
        else{
            rear=NULL;
        }
        x=p->data;
        free(p);
        return x;
    }
}
/*************************/
int DelRear(){
    int x;
    if (rear==NULL){
        printf("Deque underflows\n");
        return 0;
    }
    else{
        p=rear;
        rear=p->prev;
        if (rear!=NULL){
            rear->next= NULL;
        }
        else{
            front =NULL;
        }
        x=p->data;
        free(p);
        return x;
    }
}
/*****************************/
int Traverse(){
    if (front==NULL){
        printf("Deque is empty\n");
        return 0;
    }
    else{
        p=front;
        while(p!=NULL){
            printf("%d-->",p->data);
            p=p->next;
        }
        printf("\n");
    }
    return 0;
}
int main(){
    struct node* head ,*p;
    head = NULL;
    InsFront(10);
    InsFront(11);
    InsFront(12);
    InsFront(13);
    InsFront(14);
    Traverse();
    InsRear(15);
    InsRear(16);
    InsRear(17);
    InsRear(18);
    Traverse();
    printf("\nDeleted information is :=>%d",DelFront());
    printf("\nDeleted information is :=>%d",DelFront());
    Traverse();
    printf("\nDeleted information is:=>%d",DelRear());
    printf("\nDeleted information is:=>%d",DelRear());
    Traverse();
    return 0;
}