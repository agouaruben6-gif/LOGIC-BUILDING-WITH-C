#include <stdio.h>

int main(void) {
    int i;
    int number, sum = 0;

    for (i = 1; i <= 100; i++) {
        printf("Enter n%d: ", i);
        scanf("%d", &number);

        // If user enters -1, terminate the loop
        if (number == -1) break;

        sum = sum + number;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
