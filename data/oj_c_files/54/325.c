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
	int n,k,t,m,s,i,j;
	s=1;
	j=0;
	i=1;
	scanf("%d%d",&n,&k);
	while(i<=n)
	{
		s=s*n;
		i++;
	}
	for(m=s;m>=n+k;m--)
	{
		t=m;
		for(j=0;j<=n;j++)
		{
			t-=k;
			if((t%n)!=0)
				break;
			t-=t/n;
			
		}
		if(j==n)
			printf("%d\n",m);
	}
}

