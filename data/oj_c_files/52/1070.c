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
	int t,*p,a[100],m,n,i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for (j=0;j<m;j++)
	{
		p=a;t=a[n-1];
		for(i=n-1;i>0;i--)
			*(p+i)=*(p+i-1);
		a[0]=t;
	}

	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if (i<n-1)
			printf(" ");
	}


}