#include <stdio.h>
void decimalToBinary(int n) {
    int bin[32], i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
}
int main() {
    int num = 39;
    printf("Binaire de %d = ", num);
    decimalToBinary(num);
    return 0;
}
