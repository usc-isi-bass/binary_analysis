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
	int m,i,j,k;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
	{
		int r=0;
		for(k=3;k<i*1.0/2;k=k+2)
		{
			if(i%k==0)
			{
				r=1;
				break;
			}
		}
		if(r==1)
		{
			continue;
		}
		j=m-i;
		for(k=3;k<j*1.0/2;k=k+2)
		{
			if(j%k==0)
			{
				r=1;
				break;
			}
		}
		if(r==0)
		{
			printf("%d %d\n",i,j);
		}
	}
	return 0;
}