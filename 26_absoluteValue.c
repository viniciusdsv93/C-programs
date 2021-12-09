# include <stdio.h>

int main(void)
{
	
	float numSum(float num1, float num2);
	float absoluteValue(float num);
	float a, b, sum;
	
	printf("Enter a number: ");
	scanf("%f", &a);
	scanf("%f", &b);
	
	sum = numSum(a, b);
	
	printf("The sum is %.2f \n", sum);
	
}

float numSum(float num1, float num2) {
	
	float absoluteValue(float num);
	
	if (num1 < 0) {
		num1 = absoluteValue(num1);
	}
	if (num2 < 0) {
		num2 = absoluteValue(num2);
	}
	return num1 + num2;
}

float absoluteValue(float num) {
	return num * -1;
}
