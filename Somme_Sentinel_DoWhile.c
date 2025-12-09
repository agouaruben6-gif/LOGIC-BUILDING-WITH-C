#include <stdio.h>

int main(void) {
    int input;
    int count = 1;
    int sum = 0;

    do {
        printf("Enter an integer (or -1 to stop):\t");
        scanf("%d", &input);

        if (input != -1) {
            sum += input;
            count++;
        }
    } while (count <= 100 && input != -1);

    printf("Sum of numbers entered is %d\n", sum);
    return 0;
}
