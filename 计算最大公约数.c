#include <stdio.h>
int main()
{
	int m,n,y;
	printf("Enter two integers: ");
	scanf("%d %d",&m,&n);
	while (n!=0){
	  y=m%n; 
	  m=n;
	  n=y;}
	printf("Greatest common divisor��%d",m);
	return 0;  
 } 
