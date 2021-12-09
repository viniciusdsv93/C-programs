# include <stdio.h>

int main(void)
{
	float matrix[4][4] = {0}, total, average;
	int m, n;
	
	for (m = 0; m < 4; m++)
	{
		for (n = 0; n < 4; n++)
		{
			printf("Student %i grade %i: ", m + 1, n + 1);
			scanf("%f", &matrix[m][n]);
		}
	}
	
	for (m = 0; m < 4; m++)
	{
		total = 0;
		for (n = 0; n < 4; n++)
		{
			total += matrix[m][n];
		}
		average = total / 4;
		printf("Student's %i average grade: %.2f\n", m + 1, average);
	}
	
	return 0;
}
