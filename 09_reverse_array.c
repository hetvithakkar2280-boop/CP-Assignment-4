#include <stdio.h>

int main() {
    int a[5], n, i, temp;
    printf("How many elements (max 5)? ");
    scanf("%d", &n);
    if (n > 5 || n < 1) {
        printf("Invalid size.\n");
        return 0;
    }
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
