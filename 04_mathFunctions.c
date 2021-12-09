# include <stdio.h>
# include <math.h>
main()
{
	float num1;
	printf("Enter a real number: ");
	scanf("%f", &num1);
	printf("\nRounded up: %.2f", ceil(num1));
	printf("\nRounded down: %.2f", floor(num1));
	printf("\nSquare root: %.2f", sqrt(num1));
	printf("\nNatural logarithm: %.2f", log(num1));
	return(0);
}
