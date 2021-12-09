# include <stdio.h>
# include <conio.h>
int calcDouble (int x)
{
	x = x * 2;
	return x;
}
void main()
{
	int x, result;
	printf("Enter a number: ");
	scanf("%d", &x);
	result = calcDouble(x);
	printf("The double equals to %d", result);
}
