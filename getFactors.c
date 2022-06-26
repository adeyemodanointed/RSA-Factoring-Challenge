#include "factors.h"

/**
 * getFactors - get and print the factors of a number
 *
 * @num - the number to be factorized
 *
 * Return - void
 */

void getFactors(char *num)
{
	int integerValue = atoi(num);

	for(int i = 0; i < integerValue; i++)
	{
		if(integerValue % i == 0)
		{
			printf("%d=%d*%d\n", integerValue, integerValue/i, i);
			break;
		}
	}
}
