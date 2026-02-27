#include<stdio.h>
int main() {
    int a[50], i, n, pos, num;
    printf("This is Aditi Tripathi's program");
    printf("\nEnter size of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {   
        scanf("%d", &a[i]);}
    printf("\nEnter the element to be added: ");
    scanf("%d", &num);
    printf("\nEnter the position at which element to be added: ");
    scanf("%d", &pos);
    for (i = n - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];}
    a[pos - 1] = num;  
    n++; 
    printf("\nThe new array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("\t%d", a[i]);}
    return 0;
}