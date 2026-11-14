#include <stdio.h>

int main() {
    int a[50], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (n == 0) {
        printf("Array is empty.\n");
        return 0;
    }
    for (i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
