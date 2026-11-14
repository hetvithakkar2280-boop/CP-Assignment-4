#include <stdio.h>

int main() {
    int a[10], counted[10] = {0}, i, j, count;
    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Number\tFrequency\n");
    for (i = 0; i < 10; i++) {
        if (counted[i] == 1)
            continue;
        count = 1;
        for (j = i + 1; j < 10; j++) {
            if (a[i] == a[j]) {
                count++;
                counted[j] = 1;
            }
        }
        printf("%d\t%d\n", a[i], count);
    }
    return 0;
}
