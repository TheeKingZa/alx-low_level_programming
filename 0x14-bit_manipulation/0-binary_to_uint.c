#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: string contain binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
<<<<<<< HEAD
	int i;
	unsigned int dec_val = 0;
=======
int i;
unsigned int dec_val=0;
>>>>>>> b84b2fc62fc19ffad2310930ca1242e77495c574

if (!b)
return (0);

<<<<<<< HEAD
	for (; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec_val = 2 * dec_val + (b[i] - '0');
	}
=======
for (; b[i]; i++)
{
if(b[i] < '0' || b[i] > '1')
return (0);

dec_val= 2 * dec_val + (b[i]-'0');
}
>>>>>>> b84b2fc62fc19ffad2310930ca1242e77495c574
return (dec_val);
}
