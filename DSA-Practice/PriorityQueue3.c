//Priority Queue Linked list Implementation
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *Next;
};
/***********************/
/***********************/
struct node *GetNode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
/********************/
int InsBeg(struct node **Start,int x){
    struct node *p;
    p= GetNode();
    p->info=x;
    p->Next=(*Start);
    (*Start)=p;
    return 0;
}
/********************/
int InsAfter(struct node **p,int x){
    struct node *q;
    q=GetNode();
    q->info=x;
    q->Next=(*p)->Next;
    (*p)->Next=q;
    return 0;
}
/********************/
int InsEnd(struct node **Start,int x){
    struct node *p,*q;
    p=GetNode();
    p->info=x;
    p->Next= NULL ;
    q=(*Start);
    while (q->Next != NULL){
        q=q->Next;
    }
    q->Next=p;
    return 0;
}
/*******************/
int DelBeg(struct node **Start){
    struct node *p;
    int x;
    p=(*Start);
    (*Start)=(*Start)->Next;
    x=p->info;
    free(p);
    return x;
}
/*******************/
int DelAf(struct node **p){
    int x;
    struct node *q;
    q=(*p)->Next;
    (*p)->Next=q->Next;
    x=q->info;
    free(q);
    return x;
}
/*******************/
int DelEnd(struct node **Start){
    struct node *p, *q;
    int x;
    p=(*Start);
    q= NULL;
    while (p->Next != NULL){
        q=p;
        p=p->Next;
    }
    q->Next =NULL;
    x=p->info;
    free(p);
    return x;
}
/****************/
int Traverse(struct node *Start){
    struct node *p;
    p=Start;
    while (p!=NULL){
        printf("%d-->",p->info);
        p=p->Next;
    }
    return 0;
}
/***********************/
int Enqueue(struct node **Start,int key){
    struct node *p,*q;
    if ((*Start)==NULL){
        InsBeg(&(*Start),key);
    }
    else{
        p=(*Start);
        q=NULL;
        while (p!=NULL && key>=p->info){
            q=p;
            p=p->Next;
        }
        if (q==NULL){
            InsBeg(&(*Start),key);
        }
        else{
            InsAfter(&q,key);
        }
    }
    return 0;
}
/******************************/
int Dequeue(struct node **Start){
    int x;
    x= DelBeg(&(*Start));
    return x;
}
/**********************/
int main()
{
    struct node *Start, *p;
    Start = NULL;
    Enqueue(&Start,10);
    Enqueue(&Start,7);
    Enqueue(&Start,12);
    Enqueue(&Start,3);
    Enqueue(&Start,4);
    Enqueue(&Start,13);
    Enqueue(&Start,1);
    Enqueue(&Start,9);
    Enqueue(&Start,8);
    Traverse(Start);
    printf("\nDeleted information is :=>%d",Dequeue(&Start));
    printf("\nDeleted information is :=>%d",Dequeue(&Start));
    printf("\nDeleted information is :=>%d\n",Dequeue(&Start));
    Traverse(Start);
    return 0;
}