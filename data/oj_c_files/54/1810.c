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
	int k,n,j,i,s,t=0;
	scanf("%d%d",&n,&k);
	for(i=1;;i++)
	{
		s=i;
		t=0;
		for(j=0;j<n;j++)
		{
			if(s%n==k)
			{t++;
			s=(s-k)*(n-1)/n;}
			else
				break;
		}
		if(t==n&&s>=1)
			break;
	}
	printf("%d",i);
}
