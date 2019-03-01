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
	int a,b,c,d,e,f,h,min,s,t,i;
	for (i=1;i<=100;i++)
	{
	    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if (a+b+c+d+e+f==0)
		{
			break;
		}
		else
		{
	        h=((d+12)-(a+1))*3600;
	        min=((60-b-1)+e)*60;
	        s=(60-c)+f;
	        t=h+min+s;
			printf("%d\n",t);
		}
	}
}
