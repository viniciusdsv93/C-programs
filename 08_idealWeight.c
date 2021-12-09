# include <stdio.h>
# include <math.h>
main()
{
	float height, idealWeight;
	char gender;
	printf("Please, enter your gender: ");
	scanf("%c", &gender);
	printf("Please, enter your height in centimeters: ");
	scanf("%f", &height);
	if ((gender == 'F') || (gender == 'f'))
	{
		idealWeight = (62.1 * (height / 100)) - 44.7;
	}
	else
	{
		idealWeight = (72.7 * (height / 100)) - 58;
	}
	printf("\nYour ideal weight is: %.2f", idealWeight);
	return(0);
}
