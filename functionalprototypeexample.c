#include<stdio.h>

double square(double);  /* this is a prototype*/ 
double cube(double);


int main (void)
{

    int what_num = 0, i, j;
    printf("I want square and cube for 1 to n where n is ");

    scanf("%d",&what_num);

    printf("\n square and cube by interval of .1\n");

    for (i=1;i<=what_num;i++)
        for(j=0;j<10;j++)
            printf("\n%lf\t %lf\t%lf",i+j/10.0,square(i+j/10.0),cube(i+j/10.0));
    
    printf("\n\n");
    return 0;

}

double cube(double x){
    return (x *x *x);

}

double square (double x){
    return (x*x);
}