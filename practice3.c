#include <stdio.h>
int main()
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��",
	"������\"5 7\"��ʾ5Ӣ��7Ӣ�磺");
	double foot;
	double inch;
	scanf("%lf %lf",&foot, &inch);
	printf("�����%f��.\n",
	((foot+inch/12)*0.3048));
	return 0;
	 
}
