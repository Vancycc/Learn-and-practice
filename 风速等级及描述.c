#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	scanf("%d",&a);
	if (a<1)
	  printf("Calm���޷磩");
	else if(a<=3)
	  printf("Light air����磩");
	else if(a<=27)
	  printf("Breeze��΢�磩");
	else if(a<=47)
	  printf("Gale����磩");
	else if(a<=63)
	  printf("Storm�����磩");
	else
	  printf("Hurricane��쫷磩");    
	  
	
	 
    return 0;
}
