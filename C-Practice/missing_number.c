#include <stdio.h>
int main() {
    int a[50], n, i, sum = 0, total, missing;
    printf("This is Aditi Tripathi's program");
    printf("\nEnter the value of n ");
    scanf("%d", &n);
    printf("Enter %d elements", n - 1);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
        sum += a[i];}
    total = n * (n + 1) / 2;
    missing = total - sum;
    printf("\nThe missing number is: %d\n", missing);
    return 0;
}