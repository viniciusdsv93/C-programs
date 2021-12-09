# include <stdio.h>
main()
{
	int num, factorial;
	printf("Enter a number to calculate it's factorial: ");
	scanf("%d", &num);
	for (factorial = 1; num > 1; num--)
	{
		factorial = factorial * num;
	}
	printf("The factorial is: %d", factorial);
	return(0);		
}
