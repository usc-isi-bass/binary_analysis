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
    int m,n,i=1,x=2,y=2,j=0;
	double z=0,a[100]={2,3},b[100]={1,2};
	while(x<100)
	{
		a[x]=a[x-2]+a[x-1];
		x++;
	}
	while(y<100)
	{
		b[y]=b[y-2]+b[y-1];
		y++;
	}
	scanf("%d",&m);
	while(i<=m)
	{
		scanf("%d",&n);
		z = 0; j =0;
		while(j<n)
		{
			z=z+a[j]/b[j];
			j++;
		}
		printf("%.3lf\n",z);
		i++;
	}
	return 0;
}
