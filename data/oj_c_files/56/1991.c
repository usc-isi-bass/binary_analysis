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
	int a,m[6],i,j,x,c,d;
	scanf("%d",&a);
	m[1]=a/10000;
	m[2]=(a-m[1]*10000)/1000;
	m[3]=(a-m[1]*10000-m[2]*1000)/100;
	m[4]=(a-m[1]*10000-m[2]*1000-m[3]*100)/10;
	m[5]=a-m[1]*10000-m[2]*1000-m[3]*100-m[4]*10;
	for(i=1;i<=5;i++)
	{
		if(m[i]!=0)
		{
			c=i;
			d=c;
		    break;
		}	

	}
	for(;c<=5;c++)
	{
		i=5;
		for(j=i-1;j>=c;i--,j--)
		{
				x=m[i];
				m[i]=m[j];
				m[j]=x;
		}
	}
	for(i=d;i<=5;i++)
	{
	    printf("%d",m[i]);
	}
}