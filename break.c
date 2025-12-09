#include <stdio.h> 
int main() {
    int i;
    int number, sum = 0;
    for(i=1; i <= 100; i++) {
        printf("Enter n%d: ", i); 
        scanf("%d", &number);
        /* If user enters -1, loop is terminated */ 
        if (number == -1) break;
        sum = sum + number;
    }
    printf("Sum = %d", sum); 
    return 0;
}
