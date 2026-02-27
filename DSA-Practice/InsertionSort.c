#include <stdio.h>
void insert(int a[], int n) {
    int last = a[n - 1];
    int j = n - 2;
    while (j >= 0 && a[j] > last) {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = last;  
}
void insertionSort(int a[], int n) {
    if (n <= 1){
        return;}
    insertionSort(a, n - 1);
    insert(a, n);
}
int main() {
    int n, a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);}
    insertionSort(a, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);}
    return 0;
}