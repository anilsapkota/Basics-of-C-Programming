#include<stdio.h>

/*this program asks for distance in miles and yards and converts to kilometers*/
int main(void){
    int miles, yard;
    double kilometers;
    printf("Please provide your distance in miles and yard in integer format");
    scanf("%d%d",&miles,&yard);
    kilometers = 1.609*(miles+yard/1706.0);
    printf("%d miles and %d yard is %lf kilometers",miles,yard,kilometers);
    return 0;
}