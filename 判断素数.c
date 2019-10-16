#include <stdio.h>
int main()
{
	int a,b;
	printf("输入数字，测试是否为素数\n");
	scanf("%d",&a);
	for (b=2;b<a;b++)
	  if (a%b==0)
	  break;
	if (b==a)
	  printf("素数"); 
	else 
	  printf("非素数");
	return 0;    
}
