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
	int n,i,k;
	int issu(int k);
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(issu(i))
		{
			if(issu(n-i))
				printf("%d %d\n",i,n-i);
		}
	}
}

int issu(int k)
{
	int j,s;
	s=1;
	for(j=2;j<k;j++)
	{
		if(k%j==0)
		{
			s=0;
			return(s);
			break;
		}
		
	}
}