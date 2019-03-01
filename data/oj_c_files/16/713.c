#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	int a,i=0;
    scanf("%d",&a);
if(a==100)
printf("001");
else
{
	while(a>0)
	{
		i=i*10+a%10;
		//printf("%d",i);
		a=a/10;
	}
     printf("%d",i);}
	return(0);		
}