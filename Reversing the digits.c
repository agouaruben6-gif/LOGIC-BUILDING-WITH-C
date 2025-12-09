#include "stdio.h" 
int main () {
    int number, revNumber, remainder; 
    revNumber = 0;
    printf ("Input number:"); 
    scanf ("%d", &number); 
    while (number > 0) {
        remainder = number % 10;
        revNumber = revNumber*10 + remainder; 
        number = number/10;
    }
    printf ("The reversed number is : %d\n", revNumber);
}
