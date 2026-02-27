#include <stdio.h>
void unionSortedArrays(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;
    printf("Union of arrays: ");
    while (i < n1 && j < n2) {
        if (arr1[i] == arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        }
        else {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    while (i < n1) {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < n2) {
        printf("%d ", arr2[j]);
        j++;
    }
}
int main() {
    int arr1[50], arr2[50];
    int n1, n2, i;
    printf("This is Aditi Tripathi's program\n");
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d sorted elements: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d sorted elements: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    unionSortedArrays(arr1, n1, arr2, n2);
    return 0;
}
