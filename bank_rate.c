#include<stdio.h>

int main ()
{
	long int basic, rate ; // variable declaration about basic and bank rate
	int year; 
	
	basic = 5000000; //first rate is Rp. 5.000.000
	for (year =1; year<=8 ;year++) //Calculate total amount until 8th month
	{
		rate = basic*8/100; // calculate obtained 8% bank rate from Rp. 5.000.000 
		printf("%2d %10d %10d \n", year, basic, rate); // print for year, basic amount and bank rate
		
		basic = basic + rate;// calculate the amounnt of basic including bank rate
	}
	
	return 0;

}
