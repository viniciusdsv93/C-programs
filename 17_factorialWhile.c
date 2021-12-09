# include <stdio.h>

main()
{
	int num, fat = 1, counter = 1;
	
	printf("Enter a number to calculates it's factorial: ");
	scanf("%i", &num);
	
	while (counter <= num) {
		fat = fat * counter;
		counter++;		
	}
	printf("The result is: %i\n", fat);
	return(0);
}
