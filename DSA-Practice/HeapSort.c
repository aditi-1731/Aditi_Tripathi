#include <stdio.h>

int Adjust(int *a, int i, int n) {
    int j, temp;
    while (2 * i <= n) {
        j = 2 * i;

        if (j + 1 <= n && a[j + 1] > a[j]) {
            j++;
        }

        if (a[j] > a[i]) {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        } else {
            break;
        }

        i = j;
    }
    return 0;
}
/****************************/
int MaxHeapify(int *a, int n) {
    for (int i = n / 2; i >= 1; i--) {
        Adjust(a, i, n);
    }
    return 0;
}
/************************************/
int HeapSort(int *a, int n) {
    MaxHeapify(a, n);
    for (int j = n; j >= 2; j--) {
        int temp = a[1];
        a[1] = a[j];
        a[j] = temp;
        Adjust(a, 1, j - 1);
    }
    return 0;
}
/************************************/
int main() {
    int n, i;
    int a[100];  
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    HeapSort(a, n);
    printf("The sorted array: ");
    for (i = 1; i <= n; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}