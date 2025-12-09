#include <stdio.h> 
int main() {
    int i;
    int number, sum = 0;
    for(i=1; i <= 100; i++) {
        printf("Enter n%d: ", i); 
        scanf("%d", &number);
        /* If user enters negative number, it is skipped */ 
        if (number < 0) continue;
        sum = sum + number;
    }
    printf("Sum = %d", sum); 
    return 0;
}
