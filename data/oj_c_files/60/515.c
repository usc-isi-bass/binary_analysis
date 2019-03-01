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
	int n,i,j,q,k=0;
	scanf("%d",&n);
	for(i=2;i<=n-2;i++)
	{
		q=0;
		for(j=2;(j-1)*(j-1)<=i;j++)
		{
			if(i%j==0) {q=1;break;}
		}
		if(q==1) continue;
		else
		{
			i=i+2;
			q=0;
			for(j=2;(j-1)*(j-1)<=i;j++)
			{
				if(i%j==0) {q=1;break;}
			}
			if(q==0) {printf("%d %d\n",i-2,i);k=1;}
		}
		i=i-2;
	}
	if(k==0) printf("empty\n");
}