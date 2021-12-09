# include <stdio.h>

int main(void)
{
	float grade[10];
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		printf("Enter the grade %i: ", i + 1);
		scanf("%f", &grade[i]);
	}
	
	for (i = 0; i <= 9; i++)
	{
		printf("%.2f\n", grade[i]);
	}
	
}
