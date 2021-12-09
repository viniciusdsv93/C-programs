# include <stdio.h>
# include <math.h>
main()
{
	float cost, profitMargin, salePrice;
	printf("Enter the product's cost: ");
	scanf("%f", &cost);
	printf("Enter it's profit margin in percentage: ");
	scanf("%f", &profitMargin);
	salePrice = cost + cost * (profitMargin / 100);
	printf("The sale price is: %.2f", salePrice);
	return(0);
}
