#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * Main - Assign
 *
 * Return : Always 0 Success
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit if %d is %d", n, x);
	if (x > 5)
		{
		print("and is greater than 5");
	}
	if (x == 0)
	{
	print("and is 0");
	}
	if (x < 6 && x ! =  0)
	{
		printf("and is less than 6 and not 0");
	}
	print("\n");
	return (0);
}
