#include <stdio.h>

/* Selection Sort: finds the smallest (or largest) element in the unsorted
   part and puts it at the front. Time: O(n^2), but only n swaps. */
int main() {
    int a[5], i, j, pos, temp, choice;
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("1. Ascending  2. Descending\nEnter choice: ");
    scanf("%d", &choice);

    for (i = 0; i < 4; i++) {
        pos = i;
        for (j = i + 1; j < 5; j++) {
            if ((choice == 1 && a[j] < a[pos]) ||
                (choice == 2 && a[j] > a[pos]))
                pos = j;
        }
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
    printf("Sorted array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
