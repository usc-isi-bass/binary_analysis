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
	int i,j,n,*num,t;
	scanf("%d",&n);
	t=n/2;
	num=(int*) malloc (sizeof(int)*n);
	for (i=0;i<n;i++)
		scanf("%d",&num[i]);
	for (i=0;i<t;i++)
	{
		j=num[i];
		num[i]=num[n-1-i];
		num[n-1-i]=j;
	}
	for (i=0;i<n;i++)
	{
		printf("%d",num[i]);
		if(i<n-1) printf(" ");
	}
	free(num);
}