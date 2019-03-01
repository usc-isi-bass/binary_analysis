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

int evennumber(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i=i+1)
	{
		if(x%i==0)
		{
			return(0);
			break;
		}
	}
	if(i>sqrt(x))
		return(1);
}
void main()
{
	int n=6,m,k,o,p,e=2;
	scanf("%d",&m);
	for(n=6;n<=m;n=n+2)
	{
        
		for(e=3;e<n;e=e+2)
		{
			k=n-e;
			o=evennumber(k);
			p=evennumber(e);
			if(o==1&&p==1)
				break;
			else
				continue;
		}
		printf("%d=%d+%d\n",n,e,k);
	}
}