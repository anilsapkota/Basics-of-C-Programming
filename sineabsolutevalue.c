#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
double interval,absval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 absval = fabs(sin(interval));
 printf("sin(%lf) = %lf \n\n",interval,absval);
}


printf("\n+++++++\n");
return 0;

}