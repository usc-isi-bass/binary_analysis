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
	int max(int m,int b[]);
	int i,n,c,a[100];

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	c=max(n,a);
	printf("%d\n",c);
	for(i=0;i<n;i++)
	{
		if(a[i]==c)
			a[i]=-1;
	}

	printf("%d\n",max(n,a));
}


int max(int m,int b[])
{
	int i,ma;
	ma=b[0];
	for(i=1;i<m;i++)
	{
		if(ma<b[i])
			ma=b[i];
	}

	return(ma);
}



	
