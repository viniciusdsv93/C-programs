#include <stdio.h>

main()
{
	int num, i;
	printf("Enter a number to calculates it's times tables: ");
	scanf("%i", &num);
	for (i = 1; i <= 10; i++)
	{
	printf("%i x %i = %i\n", num, i, num * i);
	}
	return(0);
}
