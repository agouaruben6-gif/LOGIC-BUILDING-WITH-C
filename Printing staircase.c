#include<stdio.h> 
main() {
    int x; 
    scanf("%d", &x); 
    int i=1;
    do {
        int j = 1; 
        do {
            printf("%d", i); 
            j++;
        } while (j<=i);
        printf("\n"); 
        i++;
    } while (i<=x);
}
