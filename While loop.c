#include <stdio.h>
int main() {
    int x; 
    int y; 
    char op;

    printf("Input the operator \t"); 
    scanf("%c", &op); 

    while (op != 'q') {
        printf("Input the first integer \t"); 
        scanf("%d", &x);

        printf("Input the second integer \t"); 
        scanf("%d", &y); 

        switch (op) {
            case '+': printf("x+y = %d\n", x+y); break;
            case '%': printf("x mod y = %d\n", x%y); break; 
            case '/': printf("x/y = %.2f\n", (float)x/y); break; 
            case 'q': break;
            default : printf("invalid operator\n"); break;
        }
        getchar(); 
        printf("Input the operator \t"); 
        scanf("%c", &op);
    }
}
