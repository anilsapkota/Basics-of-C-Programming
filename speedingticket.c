#include<stdio.h>

int main(){
    int speed;
    printf("\nPlease enter the speed of the vehicle in mph");
    scanf("%d",&speed);
    if(speed <65)
        printf("\n You are within the speed limit");
    else
        printf("\n You might get a speeding ticket");
    
    return 0;
}