# include <stdio.h>
main()
{
	int age, qty;
	float height, sumAge, sumHeight;
	sumAge = 0;
	sumHeight = 0;
	qty = 0;
	printf("Enter the age: ");
	scanf("%d", &age);
	printf("\nEnter the height in centimeters: ");
	scanf("%f", &height);
	while (age != 0)
	{
		qty++;
		sumAge = sumAge + age;
		sumHeight = sumHeight + (height / 100);
		printf("\nEnter the age: ");
		scanf("%d", &age);
		printf("\nEnter the height in centimeters: ");
		scanf("%f", &height);
	}
	printf("\nThe average age is: %.2f", sumAge / qty);
	printf("\nThe average height in meters is: %.2f", sumHeight / qty);
	return(0);
}
