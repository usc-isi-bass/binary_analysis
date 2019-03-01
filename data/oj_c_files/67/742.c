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
	int n,a,b,i,c,d,e,f;
	double p,q,o;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	p=(double)b/a;
	for(i=0;i<n-2;i++)
	{
		scanf("%d%d",&c,&d);
		q=(double)d/c;
		if(p-q>0.05)
		{
			printf("worse");
                        printf("\n");
		}
		else
		{
			if(q-p>0.05)
			{
				printf("better");
                                printf("\n");
			}
			else
			{
				printf("same");
                                printf("\n");
			}
		}
	}
        scanf("%d%d",&e,&f);
        o=(double)f/e;
        if(p-o>0.05)
        {
		printf("worse");
	}
	else
	{
		if(o-p>0.05)
		{
			printf("better");
		}
		else
		{
			printf("same");
		}
	}
	return 0;
}