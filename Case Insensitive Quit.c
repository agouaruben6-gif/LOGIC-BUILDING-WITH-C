#include <stdio.h>
int main() {
    char op;
    int x, y;

    // Loop continues until op is 'q' or 'Q'
    while (op != 'q' && op != 'Q') {
        printf("Input the operator \t"); 
        scanf("%c", &op);

        printf("Input the first integer \t"); 
        scanf("%d", &x);

        printf("Input the second integer \t"); 
        scanf("%d", &y);

        switch (op) {
            case '+': printf("x+y = %d\n", x+y); break;
            case '%': printf("x mod y = %d\n", x%y); break;
            case '/': printf("x/y = %.2f\n", (float)x/y); break;
            default : printf("invalid operator\n"); break;
        }
        getchar();
    }
}
