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
	int n,i,a[300],m=0,c=0,r=0;
	char q;
	for (n=0;;n++)
	{
		scanf("%d",&a[n]);
		q=getchar();
		if(q!=',')
		{
			n=n+1;
			break;
		}
	}
	for (i=0;i<=n-1;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	for(i=0;i<=n-1;i++)
	{
		if (a[i]>c&&a[i]<m)
		{
			r=r+1;
			c=a[i];
		}
	}
	if(r!=0)
	{
		printf("%d",c);
	}
	else{
		printf("No");
	}
}