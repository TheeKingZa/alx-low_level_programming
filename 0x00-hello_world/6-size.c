#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main -running on sizeof 32bit or 64bit.
 *
 * return (0) Always(success)
 */
int main(void)
{
	printf("Checking system type...\n");
	/*Check if running on 32-bit or 64-bit system*/

	if (sizeof(*void) == 4)
	{
		printf("Running on a 32-bit system.\n");
		printf("The size of char is %u\n", sizeof(char));
		printf("The size of int is %u\n", sizeof(int));
		printf("The size of long int is %u\n", sizeof(long int));
		printf("The size of long long int is %u\n", sizeof(long long int))
		printf("The size of float is %u\n", sizeof(float));
}
	else
{
		printf("Running on a 64-bit system.\n");
		printf("The size of char is %lu\n", sizeof(char));
		printf("The size of int is %lu\n", sizeof(int));
		printf("The size of long is int %lu\n", sizeof(long int));
		printf("The size of long long int is %lu\n", sizeof(long long int));
		printf("The size of float is %lu\n", sizeof(float));
}
/*return 0 for success*/
		return (0);
}
