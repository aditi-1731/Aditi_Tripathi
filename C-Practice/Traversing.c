#include <stdio.h>
int main(){
    int a[10],n,i;
    printf("This is Aditi Tripathi's program");
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}