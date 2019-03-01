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
	int a[300];
	int m,n=0,i;
    scanf("%d",&a[0]);
	m=a[0];
	for(i=1;i<=299;i++)
	{
		if(scanf(",%d",&a[i])==NULL) break;
		if(a[i]>m)
		{
			n=m;
			m=a[i];
		}
		else if(a[i]<m&&n<a[i])
			n=a[i];
	}
	if(n==0)printf("No\n");
	else printf("%d\n",n);
		return 0;
}
