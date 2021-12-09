#include <stdio.h>

main()
{
	int num, i = 1;
	
	printf("Enter a number to calculates it's times tables: ");
	scanf("%i", &num);
	
	while (i <= 10) {
	printf("%i x %i = %i\n", num, i, num * i);
	i++;
	}
	
	return(0);
}
