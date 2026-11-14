#include <stdio.h>

/* Bubble Sort: repeatedly compares adjacent elements and swaps them
   if they are in the wrong order. Time: O(n^2). Simple but slow. */
int main() {
    int a[5], i, j, temp, choice;
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("1. Ascending  2. Descending\nEnter choice: ");
    scanf("%d", &choice);

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if ((choice == 1 && a[j] > a[j + 1]) ||
                (choice == 2 && a[j] < a[j + 1])) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
