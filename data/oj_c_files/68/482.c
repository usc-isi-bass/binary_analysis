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
	int n,i,j,a,b,m,k,l;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		m=0;
		k=0;
		printf("%d=",i);
		for(a=3;a<=i/2;a=a+2)
		{
			m=0;
			k=0;
			b=i-a;
			for(l=3;l<=sqrt(a);l=l+2)
			{
				if(a%l!=0)
				{m=m+1;}
				k=k+1;
			}
			if (m==k)
			{
		
				m=0;
				k=0;
				for(j=3;j<=sqrt(b);j=j+2)
				{
					if(b%j!=0)
				    m=m+1;
				    k=k+1;
				}
				if(m==k)
				{
					printf("%d+%d\n",a,b);
					break;
				}
			}
		}
	}
}