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
	int a[16];
	int i,j,k,l;
	while(scanf("%d",&a[0])&&a[0]!=-1)
	{	l=0;
		if(a[0]!=0)
		{
			for(i=1;a[i-1]!=0;i++)
			{
				scanf("%d",&a[i]);
			}
			for(j=0;j<=i-1;j++)
				for(k=0;k<j;k++)
					if(a[k]==2*a[j]||a[j]==2*a[k]) l++;
		printf("%d\n",l);
		}
		else printf("%d\n",l);
	}
	return 0;

}
