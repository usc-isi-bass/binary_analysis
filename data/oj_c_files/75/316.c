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
	int a[1000],b[1000],p=0,max=0,i,j,ren,k;
	char c;
	i=0;
	while(i<1002)
	{
		scanf("%d",&a[i]);
		scanf("%c",&c);
		if(c=='\n')
		{
			ren=i+1;
			break;
		}
		i++;
	}
	i=0;
	while(i<ren-1)
	{
		scanf("%d%c",&b[i],&c);
		i++;
	}
	scanf("%d",&b[ren-1]);
	for(i=0,j=1;j<1000;i++,j++)
	{
		for(k=0;k<ren;k++)
		{
			if(a[k]<=i&&b[k]>=j)
			{
				p++;
			}
		}
		if(p>max)
		{
			max=p;
		}
		p=0;
	}
	printf("%d %d",ren,max);
	return 0;
}
