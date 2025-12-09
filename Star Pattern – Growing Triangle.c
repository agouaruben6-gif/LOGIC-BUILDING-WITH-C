#include <stdio.h>
int main() {
    int k = 2;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        printf("\n");
        k = k + 2;
    }
    return 0;
}
