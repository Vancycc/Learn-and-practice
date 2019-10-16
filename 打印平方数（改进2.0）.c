#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d",&a);
	printf("输入数字，打印平方表.2.0\n");
	for (a=10;a>0;a--)
	  printf("%d %d\n",a,a*a);
	return 0;   
	
}
