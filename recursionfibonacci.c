#include<stdio.h>

int r_fibonnaci(int n){
 if (n <=1)
 return n;
 else return (r_fibonnaci(n-1)+r_fibonnaci(n-2));
};


int main(){

    int num = 0 , i;
    printf("How many fibonacci number you want to generate");
    scanf("%d",&num);

    for(i = 0; i<num;i++){
        printf("\n%d\t  %d\n",i,r_fibonnaci(i));
    }







    return 0;
}