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
	int m[100],i,j,x,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		for(j=i;j>0;j--)
		{
			if(m[j]>m[j-1])
			{
				x=m[j];
				m[j]=m[j-1];
				m[j-1]=x;
			}
		}
	}
	printf("%d\n",m[0]);
	printf("%d\n",m[1]);
	return 0;

}