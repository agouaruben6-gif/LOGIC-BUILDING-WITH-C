#include <stdio.h>
int main() {
    int count = 1;
    int n = 2;
    while (count <= 10) {
        int i = 2;
        int flag = 0;
        while (i < n) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
            i = i + 1;
        }
        if (flag == 0) {
            printf("Le %dème nombre premier est %d\n", count, n);
            count++;
        }
        n++;
    }
    return 0;
}
