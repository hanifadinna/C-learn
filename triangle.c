#include<stdio.h>

main ()
{
	float i, j, h;
	
	printf("Enter the height of triangle: ");
	scanf("%f", &h);
	
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=i;j++)
		printf("*");
		
		printf("\n"); // new line
		
	}
	
	return 0;
