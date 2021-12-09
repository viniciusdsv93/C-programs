# include <stdio.h>
# include <math.h>
main()
{
	float side, area;
	printf("Enter the hexagon's side in: ");
	scanf("%f", &side);
	area = (3 * (pow(side, 2)) * sqrt(3)) / 2;
	printf("\nThe hexagon's area is: %.2f", area);
	return(0);
}
