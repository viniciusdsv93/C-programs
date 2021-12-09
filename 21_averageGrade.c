# include <stdio.h>

int main(void)
{
	float grades[5] = {0};
	float total = 0;
	float average = 0;
	int i;
	
	for (i = 0; i <= 4; i++)
	{
		printf("Enter the grade %i: ", i + 1);
		scanf("%f", &grades[i]);
	}
	
	for (i = 0; i <= 4; i++)
	{
		total += grades[i];
	}
	
	average = total / 5;
	
	printf("The sum of the grades is %.2f and the average grade is %.2f\n", total, average);
	
	return 0;
}
