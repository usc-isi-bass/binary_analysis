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
	int n,a[500],b=1,c,d,f=1,g=0,i=2,j=1,k=1,x=2,y=2;
	scanf("%d",&n);
	while(b<=n)
	{
		scanf("%d",&a[b]);
		b++;
	}
	b=b-2;
	d=b;
	
	while(k<=d+1)
	{
		while(i<=d+1)	
        {
			if(a[k]==a[i])
			{
				x=i;
				while(x<=d)
				{
					a[x]=a[x+1];
		            x=x+1;
				}
				d=d-1;
				i=i;
			}
			else
				i=i+1;
		}
	    k++;
		y++;
		i=y;
		x=y;
	}
	while(f<=d+1)
	{
		printf("%d",a[f]);
		g++;
		if(g!=d+1)
			printf(",");
		f++;
	}
return 0;
}