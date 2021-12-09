# include <stdio.h>

main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%i", &age);
	
	if (age <= 5) {
		printf("Baby\n");
	}
	else if (age > 5 && age <= 12) {
		printf("Child\n");
	}
	else if (age > 12 && age < 18) {
		printf("Teenager\n");
	}
	else {
		printf("Adult\n");
	}
	return(0);
}
