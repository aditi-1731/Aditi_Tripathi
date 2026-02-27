#include <stdio.h>
int main(){
    int i,a[100],N,key;
    printf("Enter the number of elements in array: ");
    scanf("%d",&N);
    printf("\nEnter %d elements: ",N);
    for (i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the value to be searched: ");
    scanf("%d",&key);
    for(i=0;i<N;i++){
        if (a[i]==key){
            printf("\nThe key %d is found at %d",key,i);
        }
    }
    return -1;
}