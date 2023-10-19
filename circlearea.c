#include <stdio.h>
#define PI 3.14159

int main(void){
    double r, area;
    printf("Input the radius of the circle:");
    scanf("%lf",&r);
    area = PI * r*r;
    printf("The area of a cirlce with radius of %lf meters is %lf square meters.",r,area);
    return 0;
}