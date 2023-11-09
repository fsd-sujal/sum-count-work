#include<stdio.h>

main(){
	int x,y,z ;
	printf("Enter The Value Of X =");
	scanf("%d",&x);
	printf("Enter The Value Of Y =");
	scanf("%d",&y);
	z =(x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	printf("Sum Z = %d",z);
}
