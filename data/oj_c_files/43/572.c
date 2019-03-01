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

main()
{
	int m,i,j,k,l;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++,i++)
	{
		for(k=2;k<i;k++)
		{
			if(i%k==0)break;
		}
		if(k<i)continue;
		else
		{
			j=m-i;
			for(l=2;l<j;l++)
			{
				if(j%l==0)break;
			}
			if(l>=j)printf("%d %d\n",i,j);
		}
	}
}