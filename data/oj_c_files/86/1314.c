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
	int n,i,m,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int d=60;
		scanf("%d",&m);
		if(m==0)
		{
			printf("60\n");
			continue;
		}
		for(;m>0;m--)
		{
			scanf("%d",&temp);
			if(temp<d-2)
				d-=3;
			else if(temp==d-2)
				d-=2;
			else if(temp==d-1)
				d-=1;
		}
		printf("%d\n",d);
	}
}
