#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=a/10;
	if (a<0)
	  b=11;
	else if(a>100)
	  b=12; 
	else
	  b=b;
	  
	switch(b){
	
		case 0:case 1:case 2:case 3:case 4:case 5:
			printf("Letter grade: F");
			break;
		case 6:
			printf("Letter grade: D");
			break;
		case 7:
			printf("Letter grade: C");
			break;
		case 8:
			printf("Letter grade: B");
			break;
		case 9:
		case 10:
			printf("Letter grade: A"); 
			break;
		default:
			printf("Error, grade must be between 0 and 100");
		}
	return 0;
}
