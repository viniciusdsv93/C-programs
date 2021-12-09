# include <stdio.h>
main()
{
	int num1, i, qtd;
	printf("Enter an integer number: ");
	scanf("%d", &num1);
	qtd = 0;
	for(i = 1; i <= num1; i++)
	{
		if(num1 % i == 0)
		qtd++;	
	}
	if(qtd == 2)
	printf("\nIt's a prime number.");
	else
	printf("\nIt's not a prime number.");
	return(0);	
}
