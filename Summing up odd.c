#include<stdio.h> 
int main() {
    int input;
    int sum, eSum, oSum; 
    printf("Enter an integer: \t"); 
    scanf(" %d", &input);
    while (input != -1) { 
        sum += input;
        switch (input % 2) {
            case 0: eSum += input; break; 
            case 1: oSum += input;
        }
    }
    printf("sum = %d, oddSum = %d, evenSum = %d\n", sum, oSum, eSum); 
    return 0;
}
