#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	scanf("%d",&a);
	if (a<1)
	  printf("Calm（无风）");
	else if(a<=3)
	  printf("Light air（轻风）");
	else if(a<=27)
	  printf("Breeze（微风）");
	else if(a<=47)
	  printf("Gale（大风）");
	else if(a<=63)
	  printf("Storm（暴风）");
	else
	  printf("Hurricane（飓风）");    
	  
	
	 
    return 0;
}
