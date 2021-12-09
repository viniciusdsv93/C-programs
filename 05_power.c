# include <stdio.h>
# include <math.h>
main()
{
	float num1, num2;
	printf("Enter the base number: ");
	scanf("%f", &num1);
	printf("Enter the power number: ");
	scanf("%f", &num2);
	printf("\nThe base number raised to the power number equals to %.2f", pow(num1, num2));
	return(0);
}
