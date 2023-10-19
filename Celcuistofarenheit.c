#include <stdio.h>

int main(void){
    
    int celcius, farenheit;
    printf("Please enter farenheit as integer:");
    scanf("%d",&farenheit);
    celcius =(farenheit-32)/1.8;
    printf("\n The celcius for %d farenheit is %d",farenheit,celcius);


}