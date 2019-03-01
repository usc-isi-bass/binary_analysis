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
	int a,b,c,d,e,f,sum;
	for(;;)
	{
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0)
		break;
	else
	{
	d=12+d;
	sum=3600*(d-a-1);
	a=d-1;
	for(;;c=c+1,sum=sum+1)
	{
		if(c==60)
		{
			c=0;
			b=b+1;
		}
		if(b==60)
		{
			a=a+1;
			b=0;
		}
		if(a==d&&b==e&&c==f)
			break;
	}
printf("%d\n",sum);
	}
	}
return 0;
}
	
