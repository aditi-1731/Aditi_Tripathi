#include <stdio.h>
int main() {
    int a[50], i, n, temp;
    printf("This is Aditi Tripathi's program");
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);}
    for(i = 0; i < n/2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;}
    printf("The reversed array: ");
    for(i = 0; i < n; i++) {
        printf("\n%d", a[i]);
    }
    return 0;
}