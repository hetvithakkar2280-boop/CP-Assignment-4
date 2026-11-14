#include <stdio.h>

int main() {
    int a[50], n, i, num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position.\n");
        return 0;
    }

    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = num;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
