#include<stdio.h>


void write_very(int count)
{
    while (count >0)
    {
        printf("\n very");
        count--;

    };
    printf(" much.\n\n");
}

int main(void)
{
    int repeat = 0;
    printf("How strong is your love 1-10?:");
    scanf("%d",&repeat);
    printf("\nI love you very");
    write_very(repeat);
    return 0;

}