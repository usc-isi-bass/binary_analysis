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
	int n,i,q,s,k;
	scanf("%d",&n);
	k=sqrt(n-3);
	for(i=2;i<=k;i++)
		if((n-3)%i==0)break;
	if(i>k)printf("3 %d\n",n-3);
	for(q=5;q<=(n/2);q++)
	{
		k=sqrt(q);
		for(i=2;i<=k;i++)
			if(q%i==0)break;
		if(i>k)
		{
			s=sqrt(n-q);
			for(i=2;i<=s;i++)
				if((n-q)%i==0)break;
			if(i>s)printf("%d %d\n",q,n-q);
		}
	}
}





