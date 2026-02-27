#include <stdio.h>
#include <stdlib.h>
int IndexSequential(int *A,int N,int x){
    int low=0 ;
    int high = N-1;
    if(x<A[low] || x>A[high]){
        return -1;
    }
    int i =low;
    while (i<high && x>A[i]){
        i=i+4;
    }
    if(x==A[i]){
        return i;
    }
    else{
        int li=i-1;
        int fi=i-4+1;
        for(int j=fi;j<=li;j++){
            if(A[j]==x){
                return j;
            }
        }
        return -1;
    }
}
int main(){
    int A[]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50};
    printf("%d\n", IndexSequential(A,25,20));
    printf("%d\n", IndexSequential(A,25,36));
    printf("%d\n", IndexSequential(A,25,47));
    printf("%d\n", IndexSequential(A,25,6));
    printf("%d\n", IndexSequential(A,25,50));
    printf("%d\n", IndexSequential(A,25,41));
    printf("%d\n", IndexSequential(A,25,55));
    printf("%d\n", IndexSequential(A,25,2));
}