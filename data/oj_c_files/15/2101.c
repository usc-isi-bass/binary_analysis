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
	int n,i,k,m,a=0,b,p=0,q=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n;k++)
		{
			scanf("%d",&m);
			if(m==0)
			{
				a=a+1;
				p=p+1;
			}
		}
		if(p!=0)
			q=q+1;
		p=0;
	}	
	b=(q-2)*(a-2*q)/2;
	printf("%d\n",b);
}
