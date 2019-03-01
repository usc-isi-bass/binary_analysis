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
	int a[18],m,n,i,j,r=0,b[100];
	int t;
	scanf("%d",&t);
	while(t!=-1)
	{
		m=1;
		r++;
		n=0;
		a[0]=t;
		for (i=1;i<18;i++)
		{
			scanf("%d",&a[i]);
			if (a[i]!=0) 
				m=m+1;
			else
				break;
		}
		for (i=0;i<m;i++)
		{
			for (j=m-1;j>i;j--)
			if (a[j]==2*a[i]||a[i]==2*a[j]) 
				n++;
		}
		b[r]=n;
		scanf("%d",&t);
	}
	for (i=1;i<r+1;i++)
			printf("%d\n",b[i]);
}