#include <stdio.h>

int main() {
    int a[10], b[10] = {0}, i, n;
    char dir;
    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("Enter number of positions to shift: ");
    scanf("%d", &n);
    printf("Shift Left or Right (L/R): ");
    scanf(" %c", &dir);

    if (dir == 'L' || dir == 'l') {
        for (i = n; i < 10; i++)
            b[i - n] = a[i];
    } else if (dir == 'R' || dir == 'r') {
        for (i = 0; i < 10 - n; i++)
            b[i + n] = a[i];
    } else {
        printf("Invalid direction.\n");
        return 0;
    }

    printf("Array after shifting: ");
    for (i = 0; i < 10; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
