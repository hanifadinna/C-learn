#include<stdio.h>

// This is the program how to make u number in a table format

main ()
{
	int i, j, row, col, number;
	
	
	printf("Enter how much row: ");
	scanf("%d", &row);
	
	printf("Enter how much col: ");
	scanf("%d", &col);
	
	for(i=row;i>=1; i--)
	{
		number = i;
		for(j=1; j<=col; j++)
		{
			printf("%3d", number);
			number = number + row;
		}
		printf("\n"); //new line
	}
	return 0;

}
