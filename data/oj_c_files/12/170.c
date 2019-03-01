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
	int a[16],i,j,k,count,n;
	for(i=0;i<16;i++)
	{
		count=0;
		n=0;
		for(j=0;j<16;j++)
		{
			scanf("%d",&a[j]);
			if(a[0]==-1)
				break;
			if(a[j]==0)
				break;
			count++;
		}
		if(a[0]==-1)
			break;
		for(j=0;j<count;j++)
		{
			for(k=0;k<count;k++)
			{
				if(a[k]==2*a[j])
					n++;
			}
		}
		printf("%d\n",n);
	}
	return 0;
}