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
		int i,j,n,a[20000],b[20000];
	scanf("%d",&n);
	scanf("%d",&a[1]);
	printf("%d",a[1]);
	for(i=2;i<=n;++i)
	{
		scanf("%d",&a[i]);
		for(j=1;j<=i-1;++j)
		{
			b[i-1]=0;
			b[j]=a[j]-a[i];
			if(b[j]==0)break;
		}
		if(b[i-1]!=0)printf(" %d",a[i]);
	}
	return 0;
}
