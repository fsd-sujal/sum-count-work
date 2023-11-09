#include<stdio.h>

main(){
	float s,u,j ;
	printf("Enter The Value Of S =");
	scanf("%f",&s);
	printf("Enter The Value Of U =");
	scanf("%f",&u);
	j = (s*s*s) - (u*u*u) - ((3*s*u)*(s+u));
	printf("Sum J = %.2f",j);
}
