#include <stdio.h>

/* Insertion Sort: takes one element at a time and inserts it at its correct
   place in the already sorted part. Time: O(n^2) worst case, O(n) if the
   array is already nearly sorted. */
int main() {
    int a[5], i, j, key, choice;
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("1. Ascending  2. Descending\nEnter choice: ");
    scanf("%d", &choice);

    for (i = 1; i < 5; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && ((choice == 1 && a[j] > key) ||
                          (choice == 2 && a[j] < key))) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("Sorted array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
