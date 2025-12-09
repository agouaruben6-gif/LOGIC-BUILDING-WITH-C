#include<stdio.h> 
main() {
    double xL = 1; double xR = 25; 
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
    printf ("sqrt of 55 is %.4f\n", xL);
}
