#include <stdio.h>
int main() {
    double xL = 1, xR = 25;
    double xM, epsilon;
    epsilon = 0.0001;
    while (xR - xL >= epsilon) {
        xM = (xL + xR) / 2;
        if ((xM * xM - 55) > 0) {
            xR = xM;
        } else {
            xL = xM;
        }
    }
    printf("sqrt(55) ≈ %.4f\n", xL);
    return 0;
}
