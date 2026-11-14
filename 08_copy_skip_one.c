#include <stdio.h>

/* Copies a[5] into b[10], skipping one element of a (chosen by the user).
   The remaining positions of b are filled with 0. */
int main() {
    int a[5], b[10] = {0}, i, j = 0, skip;
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("Enter position (1-5) of the element to skip: ");
    scanf("%d", &skip);

    for (i = 0; i < 5; i++) {
        if (i == skip - 1)
            continue;
        b[j] = a[i];
        j++;
    }

    printf("Copied array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
