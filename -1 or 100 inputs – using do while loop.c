#include<stdio.h> 
int main() {
    int input;
    int count = 1; 
    int sum = 0;
    do {
        printf("Enter an integer: \t"); 
        scanf("%d", &input);
        count++;
        if (input != -1) sum += input;
    } while (count <= 100 && input != -1);
    printf("sum of numbers entered is %d\n", sum); 
    return 0;
}
