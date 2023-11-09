#include<stdio.h>

main(){
	float c,b,z,x ;
	printf("Enter The Value Of C =");
	scanf("%f",&c);
	printf("Enter The Value Of B =");
	scanf("%f",&b);
	printf("Enter The Value Of Z =");
	scanf("%f",&z);
	x = (c*c) + (b*b) + (z*z) + (2*(c*b)+(b*z)+(z*c)) ;
	printf("Sum X = %.2f",x);
}
