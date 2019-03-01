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
	int m,i,k,x,p=0,q=0;
	scanf("%d",&m);
	if(m==6)
		printf("3 3");
	else
	for(i=3;i<=m/2;i+=2)
	{
		k=m-i;
		for(x=2;x<=sqrt(i);x++)
		{
			if((i%x)==0)
				p=1;
		}
		for(x=2;x<=sqrt(k);x++)
		{
			if((k%x)==0)
				q=1;
		}
		if(p==0&&q==0)
			printf("%d %d\n",i,k);
			p=0;
			q=0;
	}
	return 0;
}