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

int main()
{
	int m,n,i,j,a[14]={100},b[14]={100};
	scanf("%d%d",&m,&n);
	a[0]=m;
	b[0]=n;
	for(i=0;a[i]>=1;i++)
	{
		a[i+1]=a[i]/2;

	}

	for(j=0;b[j]>=1;j++)
	{
		b[j+1]=b[j]/2;

	}
for(i=0;i<=12;i++)
for(j=0;j<=12;j++)
if(a[i]==b[j])
{
	printf("%d\n",a[i]);
return 0;
}
	
}

	