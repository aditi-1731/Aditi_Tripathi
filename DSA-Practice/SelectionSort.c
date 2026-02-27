#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int findMinIndex(int a[], int start, int end) {
    if (start == end){
        return start;}
    int minIndexRest = findMinIndex(a, start + 1, end);
    return (a[start] < a[minIndexRest]) ? start : minIndexRest;
}
void selectionSort(int a[], int start, int n) {
    if (start == n - 1)  {
        return;}
    int minIndex = findMinIndex(a, start, n - 1);
    if (minIndex != start){
        swap(&a[start], &a[minIndex]);}
    selectionSort(a, start + 1, n);  
}
int main() {
    int n, a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);}
    selectionSort(a, 0, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);}
    return 0;
}