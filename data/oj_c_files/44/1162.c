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

int reverse(int a)
{
	int c;
	int d=0;
	int i;
	if(a<0)
	{
		a=-a;
	    for(i=0;a!=0;i++)
		{
         c=a%10;
	     a=a/10;
		 d=c+d*10;
		}
		return -d;
	}
	else
	{
        for(i=0;a!=0;i++)
		{
		 c=a%10;
		 a=a/10;
		 d=c+d*10;
		}	
		return d;
	}
}
int main()
{
 int i;
 int a[6];
 int b[6];
 for(i=0;i<6;i++)
 scanf("%d",&a[i]);
 for(i=0;i<6;i++)
 {
   b[i]=reverse(a[i]) ;
   printf("%d\n",b[i]);
 }
}