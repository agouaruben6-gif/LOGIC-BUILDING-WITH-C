#include<stdio.h> 
int main() {
    int x, y; char op;
    while (1) {
        printf("Input the operator \t"); scanf ("%c", &op); 
        printf("Input the first integer \t"); scanf ("%d", &x); 
        printf("Input the second integer \t"); scanf ("%d", &y); 
        switch (op) {
            case '+': printf("x+y = %d\n", x+y); break;
            // other cases..
        }
        getchar();
    }
}
