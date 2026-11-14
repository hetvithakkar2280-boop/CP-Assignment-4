#include <stdio.h>

int main() {
    int a[50], n, i, value, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the value to search: ");
    scanf("%d", &value);

    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            printf("Value %d found at position %d.\n", value, i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0)
        printf("Value %d not found in the array.\n", value);
    return 0;
}
