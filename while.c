#include<stdio.h> 
int main() {
    int n;
    int value = 2;
    printf("Enter a positive integer:\t"); 
    scanf("%d", &n);
    while (n > 1) { 
        value *= 2; 
        n--;
    }
    printf("%d\n", value); 
    return 0;
}
