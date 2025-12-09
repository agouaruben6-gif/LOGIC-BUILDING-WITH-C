#include <stdio.h>

int main(void) {
    int input;
    int count = 1;
    int sum = 0;

    do {
        printf("Enter an integer:\t");
        scanf("%d", &input);
        sum += input;
        count++;
    } while (count <= 100);

    printf("Sum of numbers entered is %d\n", sum);
    return 0;
}
