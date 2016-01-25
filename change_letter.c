#include<stdio.h>
#include<string.h>

main ()
{
	int i;
	char string[80]; //identify the string entered max 80 character
	char name; // 
	
	printf("Enter any string:\n");// Enter whatever words you want
	gets(string);
	
	for(i=0; i< (int) strlen(string); i++)
	{
		name = string[i];
		if((name>='A') && (name<='Z'))
			printf("%8c", (char) (name+32));
			else
		if((name>='a') && (name<='z'))
			printf("%c", (char) (name-32));
			else
			printf("%8c", name);
	}
	printf("\n");
}
