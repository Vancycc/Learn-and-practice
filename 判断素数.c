#include <stdio.h>
int main()
{
	int a,b;
	printf("�������֣������Ƿ�Ϊ����\n");
	scanf("%d",&a);
	for (b=2;b<a;b++)
	  if (a%b==0)
	  break;
	if (b==a)
	  printf("����"); 
	else 
	  printf("������");
	return 0;    
}
