#include<stdio.h> 
int main() {
    int input; 
    int count; 
    int sum = 0;
    for (count=1; count <= 100; count++) { 
        printf("Enter an integer: \t"); 
        scanf("%d", &input);
        sum += input;
    }
    printf("sum of numbers entered is %d\n", sum); 
    return 0;
}
