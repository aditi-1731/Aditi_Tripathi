#include <stdio.h>
int main() {
    int a[50], i, pos, n;
    printf("This is Aditi Tripathi's program");
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    printf("\nEnter the elements: ");
    for(i = 0; i < n; i++) {  
        scanf("%d", &a[i]);}
    printf("Enter the position at which element needs to be deleted: ");
    scanf("%d", &pos);
    for(i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];}
    n--; 
    printf("Array after deletion: ");
    for(i = 0; i < n; i++) {
        printf("\t%d", a[i]);}
    return 0;
}