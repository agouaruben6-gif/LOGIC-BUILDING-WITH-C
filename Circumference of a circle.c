#include <stdio.h>
main() {
    float radius; 
    float circum;
    printf("Enter radius : "); 
    scanf("%f", &radius);
    circum = 2 * (22.0/7) * radius;
    printf("radius = %f, circum = %f\n", radius, circum);
}
