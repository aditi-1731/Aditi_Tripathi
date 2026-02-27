#include <stdio.h>
int BubbleSort(int *a, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0;
}
int main() {
    int n, i, a[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    BubbleSort(a, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}