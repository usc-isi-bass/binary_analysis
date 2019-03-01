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
	int a[26],b[26],i,j,n,max=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(i=2;i<=n;i++)
		for(j=1;j<i;j++)
		  if (a[i-j]>=a[i]&&b[i-j]>(b[i]-1)) b[i]=b[i-j]+1;
	for(i=1;i<=n;i++)
		if(b[i]>max) max=b[i];
	printf("%d",max);
}