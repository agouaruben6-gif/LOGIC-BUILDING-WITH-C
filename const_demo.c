#include <stdio.h>

int main() {
    const int x = 100;
    // x = 200; // Erreur : valeur non modifiable
    printf("Valeur de x = %d", x);
    return 0;
}
