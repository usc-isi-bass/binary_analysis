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
	int i,j,a[25],b[25],c,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	b[0]=1;
	for(i=1;i<n;i++)
	{
		b[i]=1;
		for(j=0;j<i;j++)
		{
			if(((b[j]+1)>b[i])&&(a[j]>=a[i]))
				b[i]=b[j]+1;
		}
	}
	c=0;
	for(i=0;i<n;i++)
	{
		if(b[i]>c)
			c=b[i];
	}
	printf("%d\n",c);
}