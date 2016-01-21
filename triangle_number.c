#include<stdio.h>

main()
{
	int i, j, height, number;
	
	printf("Enter the height of triangle: ");
	scanf("%d", &height);

	for(i=1; i<=height; i++)
	{
		number = i;
		for(j=1; j<=i; j++)
		{
			printf("%3d", number);
			number = number + height-j;
		}
		printf("\n"); //new line
	}	
	return 0;
}
