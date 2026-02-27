#include <stdio.h>
int main() {
    int a[50], freq[50] = {0}, i, j, n;
    printf("This is Aditi Tripathi's program\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);}
    for (i = 0; i < n; i++) {
        int count = 1;
        if (freq[i] != -1) {  
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                    freq[j] = -1;}}
            freq[i] = count;}}
    printf("\nRepeated elements are:");
    for (i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("%d (occurs %d times)\n", a[i], freq[i]);}}
    printf("\nNon-repeated elements are:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] == 1) {
            printf("%d\n", a[i]);}}
    return 0;
}