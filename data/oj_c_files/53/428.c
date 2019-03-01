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
    int i,n,a[400],b[400],j,k,m;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{scanf("%d",&a[i]);}
    for(m=0,i=0;i<=n-1;i++)
	{
		for(j=0,k=1;j<=i-1;j++)
		{if (a[i]==a[j])
		{k=0;break;}
		}
		if(k!=0)
		{b[m]=a[i];m++;}
	}
	for(i=0;i<=m-2;i++)
	{ printf("%d,",b[i]);};
	printf("%d",b[m-1]);
}

