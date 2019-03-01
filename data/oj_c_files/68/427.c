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
	int n,a,i,s,k;
	scanf("%d",&k);
	for (n=6;n<=k;n=n+2)
{
	for (a=3;a<=n/2;a++)
	{
		s=sqrt(a);
		for(i=2;i<=s+1;i++)
		{
			if(a%i==0)break;
		}
		if(i>s+1)
		{
			s=sqrt(n-a);
			for(i=2;i<=s+1;i++)
			{
				if((n-a)%i==0)break;
			}
			if(i>s+1)
			{	
				printf("%d=%d+%d\n",n,a,n-a);
				break;
			}	
		}
	}
}
}