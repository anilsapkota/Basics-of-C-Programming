#include<stdio.h>


long int r_factorial(int n){

    if (n ==1)
    return 1;
    else
    return (r_factorial(n-1) *n);
};

int main(void){

    long num;

    printf("Enter the number of which you want to calculate the factorial");
    scanf("%d",&num);

    printf("The factorial of %d, is %d",num,r_factorial(num));

}



