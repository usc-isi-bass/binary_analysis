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
	int n,i,j,u,max=0,max2=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
    for(j=1;j<=n;j++)
		if(max<a[j-1]) max=a[j-1];
		else max=max;
    for(u=1;u<=n;u++)
        if(max2<a[u-1]&&max>a[u-1]) max2=a[u-1];
        else max2=max2;

    printf("%d\n",max);
    printf("%d\n",max2);
	return 0;
}
