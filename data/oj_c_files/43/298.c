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
	int i,j,n,s,k,m;
	scanf("%d",&n);
	for(i=3;i<n/2+1;i+=2)
	{
		s=0;
		for(m=2;m<i;m++)
		{
			if(i%m==0)
			{
				s=1;
				break;
			}
		}
		if(s==1)
		{
			continue;
		}
		j=n-i;
		for(k=2;k<j;k++)
		{
			s=0;
			if(j%k==0)
			{
				s=2;
				break;
			}
		}
		if(s==2)
		{
			continue;
		}
		if(i+j==n)
		{
			printf("%d %d\n",i,j);
		}
	}
	return 0;
}

