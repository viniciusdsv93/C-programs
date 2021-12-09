# include <stdio.h>
main()
{
	int children, qty;
	float salary, sumSalary, sumChildren, highest, lowest;
	qty = 0;
	sumSalary = 0;
	sumChildren = 0;
	highest = 0;
	printf("Enter the salary: ");
	scanf("%f", &salary);
	lowest = salary;
	printf("\nEnter the number of children: ");
	scanf("%d", &children);
	while (salary != -1)
	{
		qty++;
		if (salary > highest)
		{
			highest = salary;
		}
		if (salary < lowest)
		{
			lowest = salary;
		}
		sumSalary = sumSalary + salary;
		sumChildren = sumChildren + children;
		printf("\nEnter the salary: ");
		scanf("%f", &salary);
		printf("\nEnter the number of children: ");
		scanf("%d", &children);
	}
	printf("\nThe average salary is: %.2f", sumSalary / qty);
	printf("\nThe average children number is: %.2f", sumChildren / qty);
	printf("\nThe highest salary is: %.2f", highest);
	printf("\nThe lowest salary is: %.2f", lowest);
	return(0);
}
