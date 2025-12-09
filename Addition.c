#include <stdio.h> 
main() {
    /* Assume N1 and N2 are defined as const int */ 
    int A[N1][N2];
    int B[N1][N2];
    int C[N1][N2];
    int i, j;
    for (i = 0; i < N1; i++) {
        for (j = 0; j < N2; j++) {
            A[i][j] = B[i][j] + C[i][j];
        }
    }
}
