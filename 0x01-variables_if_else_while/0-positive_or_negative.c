#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
* main - Determines if a number is positive, negative or zero
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n;
printf("Enter an integer:");
scanf("%d",&n);
if(n>0)
{
printf("%d is positive\n",n);
}
else if(n<0)
{
printf("%d is negative\n",n);
}
else
{
printf("%d is zero\n",n);
}
return 0;
}
