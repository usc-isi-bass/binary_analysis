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

void main()
{
	int copy(int x);
	int a[6],b[6],i;
	for(i=1;i<=6;i++)
		scanf("%d",&a[i]);
    for(i=1;i<=6;i++)
		b[i]=copy(a[i]);
	for(i=1;i<=6;i++)
		printf("%d\n",b[i]);
}
int copy(int x)
{
	int o,p,q,r,s,y;
	if (x<=0)
	{
		x=-x;
		if (x<1000)
		{
		    o=x%10;
		    p=((x-o)%100)/10;
		    q=(x-o-10*p)/100;
		    y=-(100*o+10*p+q);
		}
		else if (x>=1000&&x<10000)
		{
			o=x%10;
		    p=((x-o)%100)/10;
		    q=((x-o-10*p)%1000)/100;
		    r=(x-o-10*p-100*q)/1000;
		    y=-(1000*o+100*p+10*q+r);
		}
		else
		{
			o=x%10;
		    p=((x-o)%100)/10;
		    q=((x-o-10*p)%1000)/100;
		    r=((x-o-10*p-100*q)%10000)/1000;
			s=(x-o-10*p-100*q-1000*r)/10000;
		    y=-(10000*o+1000*p+100*q+10*r+s);
		}
	}
	else
	{
		if (x<1000)
		{
		    o=x%10;
		    p=((x-o)%100)/10;
		    q=(x-o-10*p)/100;
		    y=100*o+10*p+q;
		}
		else if (x>=1000&&x<10000)
		{
			o=x%10;
		    p=((x-o)%100)/10;
		    q=((x-o-10*p)%1000)/100;
		    r=(x-o-10*p-100*q)/1000;
		    y=1000*o+100*p+10*q+r;
		}
		else
		{
			o=x%10;
		    p=((x-o)%100)/10;
		    q=((x-o-10*p)%1000)/100;
		    r=((x-o-10*p-100*q)%10000)/1000;
			s=(x-o-10*p-100*q-1000*r)/10000;
		    y=10000*o+1000*p+100*q+10*r+s;
		}
	}
	return(y);
}