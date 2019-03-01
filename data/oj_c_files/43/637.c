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
	int n,a,b,c,i,d=0,e=0;
	scanf("%d",&n);
    for( i=3;i<=n/2;i=i+2)
	{
		for( a=2;a<i;a++)
		{
			if(i%a==0)
			{d=1;break;}
			else {d=0;} 
		}
		if(d==0)
		{
		b=n-i;
		for( c=3;c<b;c=c+2)
		{
			if(b%c==0)
			
		

        {e=1;break;}
			else {e=0;} 


		}
		}
		else {continue;}
			if(e==0&&d==0)
			printf("%d %d\n",i,b);
			else{ continue;}
		
	}return 0;
}