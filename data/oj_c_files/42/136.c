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
	int n,a[100000],k,i,j,b[100000],c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
    j=0;
	c=0;
	for(i=0;i<n;i++)
	{	
		if(a[i]!=k)
		{b[j]=a[i];j=j+1;c=c+1;}
	}
	for(j=0;j<c-1;j++)
		printf("%d ",b[j]);
	printf("%d\n",b[j]);
}