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
	int i,j,k,m=0,h=0;
	int f[20]={1,1};
	int a[20]={0};
	int b[20]={0};
	int n;
	for(i=2;i<20;i++)
	{
		f[i]=f[i-2]+f[i-1];
	}
	for(i=0;i<20;i++)
	{
		a[i]=f[i];
	}
	scanf("%d",&n);
    for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(k=0;k<n;k++)
	{
		m=b[k];
        h=a[m-1];
		printf("%d\n",h);
	}
	return 0;
}



