#include <stdio.h>

int main() {
    int a[50], n, i, j, value, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the value to delete: ");
    scanf("%d", &value);

    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Value %d not found in the array.\n", value);
    } else {
        printf("Array after deletion: ");
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}
