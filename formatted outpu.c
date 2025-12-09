#include <stdio.h>
main() {
    float radius; 
    float circum;
    printf("Enter radius : "); 
    scanf("%f", &radius);
    circum = 2 * (22.0/7) * radius;
    printf("radius = %5.2f, circum = %5.2f\n", radius, circum);
}
