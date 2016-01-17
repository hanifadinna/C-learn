#include<stdio.h>


main ()
{
	double grade;
	
	printf("Total grade: ");
	scanf("%lf", &grade);
	
	if (grade>=2 && grade<=2.75)
		printf("graduate with satisfactory\n");
	
	else if (grade>2.75 && grade<=3.5)
		printf("Graduare with honors\n");
	
	else if (grade>3.5 && grade<=4)
		printf("Graduate with cumlaude\n");

	else
		printf("Wrong grade\n");
	
	getch();
}
