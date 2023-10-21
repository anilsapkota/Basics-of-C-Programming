#include<stdio.h>
#include<math.h>

int main(void){
    double num;
    printf("Enter a value between 0 and 1(non -inclusive)");
    scanf("%lf",&num);
    printf("The sine value of %lf is %lf",num,sin(num));
    return 0;
}