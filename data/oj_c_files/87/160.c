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
	for(int i=1;i>0;i++)
	{
	   scanf("%d %d %d %d %d %d ",&a,&b,&c,&d,&e,&f);
	   if(a+b+c+d+e+f==0)
	   {
		   break;
	   }
       sum=(12+d)*3600+e*60+f-(3600*a+60*b+c);
	   printf("%d\n",sum);
	}
	return 0;
}