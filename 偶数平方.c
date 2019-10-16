#include <stdio.h>
int main()
{
	int a=2,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for (;a*a<=n;a=a+2)
	  printf("%d\n",a*a);
	return 0;  
}
