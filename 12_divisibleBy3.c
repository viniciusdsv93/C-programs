# include <stdio.h>
# include <math.h>
main()
{
	int i, num;
	num = 3;
	i = 3;
	for (i = 3; i < 50; i++)
	{
		if (num % 3 == 0)
		{
			printf("%d\n", num);
		}
		num++;	
	}
	return(0);
}
