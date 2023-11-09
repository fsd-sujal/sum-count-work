#include<stdio.h>

main(){
	int x,y,z ;
	printf("Enter The Value Of X =");
	scanf("%i",&x);
	printf("Enter The Value Of Y =");
	scanf("%i",&y);
	z =(x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x)) ;
	printf("Sum Z = %i",z);
}
