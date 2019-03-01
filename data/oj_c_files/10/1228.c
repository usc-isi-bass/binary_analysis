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
	int k,a[25],b[25]={0},m,i,j;
	scanf("%d",&k);
	for(i=0;i<=k-1;i++)scanf("%d",&a[i]);
	for(i=k-1;i>=0;i--)
	{
		m=0;
		for(j=i;j<=k-1;j++)if(a[i]>=a[j]&&m<=b[j])m=b[j];
		b[i]=m+1;
	}
	m=b[0];
	for(i=0;i<=k-1;i++)
	{
		if(m<b[i])m=b[i];
	}
	printf("%d",m);
}
