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
	int a[20],i,m,n,k;
	for(;;)
	{
		k=0;
		scanf("%d",&a[0]);
		if(a[0]==-1)
			break;
		for(i=1;;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]==0)
				break;
		}
		for(m=0;m<i;m++)
			for(n=0;n<i;n++)
				if(a[m]==2*a[n])
					k++;
		printf("%d\n",k);
	}
}
			