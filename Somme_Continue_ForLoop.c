#include <stdio.h>

int main(void) {
    int i;
    int number, sum = 0;

    for (i = 1; i <= 100; i++) {
        printf("Enter n%d: ", i);
        scanf("%d", &number);

        // Skip negatives
        if (number < 0) continue;

        sum = sum + number;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
