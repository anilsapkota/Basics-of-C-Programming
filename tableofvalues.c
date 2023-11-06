#include<stdio.h>
#include<math.h>

int main(){
    double interval;

    //for loop to go through the interval 

    for (int i = 1; i<10;i++){
        interval = i/10.0;
        printf("For %lf,sine value is %lf, and cosine value is %lf\n\n",interval,sin(interval),cos(interval));

    }




return 0;

}