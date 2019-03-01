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
	int i,n,a,b,c,d,e,f,x,y,z,t;
	n=100;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
		{
			break;
		}
			else
			{
			d+=12;
			if(f<c)
			{
				f+=60;
				z=f-c;
				e--;
			}
			else
			{
				z=f-c;
			}
			if(e<b)
			{
				e+=60;
				y=e-b;
				d--;
			}
			else
			{
				y=e-b;
			}
			x=d-a;
			t=3600*x+60*y+z;
			printf("%d\n",t);
		}
	}
	return 0;
}