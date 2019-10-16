#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a dollar amount:");
    scanf("%d",&a);
    int b=a/20;
    int c=(a-20*b)/10;
    int d=(a-20*b-10*c)/5;
    int e=a-20*b-10*c-5*d;
    printf("$20 bills:%d\n$10 bills:%d\n$5 bills:%d\n$1 bills:%d",b,c,d,e);
    
    return 0;
}
