#include<stdio.h>.

main()

{
	float a, surface_area, vol;// 
	
	printf("Enter the length size of cube: \n");
	scanf("%f", &a);
	
	surface_area= 6*a*a;
	vol= a*a*a;
	
	printf("The surface area of cube is %f\n", surface_area);
	printf("The cube volume is %f", vol);
	
	return 0;
}
