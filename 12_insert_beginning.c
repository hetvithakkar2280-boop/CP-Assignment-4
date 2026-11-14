#include <stdio.h>

int main() {
    int a[50], n, i, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the number to insert at the beginning: ");
    scanf("%d", &num);

    for (i = n; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = num;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
