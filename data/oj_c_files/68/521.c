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
	int n,i,i1,j,j1,k,a,p;
	scanf("%d",&n);
	for(a=6;a<=n;a=a+2)
	{
		for(i=3;i<=a;)
		{
			i1=i;
			for(p=3;p<=sqrt(i);p=p+2)
			{
				if(i%p==0)
					i=i/p;
			}
			if(i==i1)
			{	
				j=j1=a-i;
				for(k=3;k<=sqrt(j);k=k+2)
				{
					if(j%k==0)
					j=j/k;
				}
				if(j==j1)
					{printf("%d=%d+%d\n",a,i,j);break;}
				else i=i+2;
			}
			else i=i1+2;
		}
	}
}
