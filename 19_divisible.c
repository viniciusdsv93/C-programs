#include <stdio.h>

main()
{
	int num1, num2;
	
	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter the second number: ");
	scanf("%i", &num2);
	
	
	if (num2 == 0) {
		printf("It's not possible to divide by 0.\n");
	}
	else if (num1 % num2 == 0) {
		printf("The number %i is divisible by the number %i.\n", num1, num2);
	}
	else {
		printf("The number %i is not divisible by the number %i.\n", num1, num2);
	}
	
	return(0);
}
