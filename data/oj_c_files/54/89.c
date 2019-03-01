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
	int a[100]={0},n,k,j,i;
		scanf("%d%d",&n,&k);
	for(j=1;i!=n+1;j++)
	{
		a[0]=j;
		for(i=1;i<=n;i++)
		{if(a[i-1]%(n-1)==0)  a[i]=a[i-1]*n/(n-1)+k;
		else break;}
	}
	printf("%d",a[n]);	
}