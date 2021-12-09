# include <stdio.h>
main()
{
	float num1, num2;
	printf("Enter a real number: ");
	scanf("%f", &num1);
	printf("Enter another real number: ");
	scanf("%f", &num2);
	printf("\nThe sum is: %.2f", num1 + num2);
	printf("\nThe subtraction is: %.2f", num1 - num2);
	printf("\nThe multiplication is: %.2f", num1 * num2);
	printf("\nThe division is: %.2f", num1 / num2);
	return(0);
}
