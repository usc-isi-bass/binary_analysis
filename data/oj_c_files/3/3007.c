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
	int n,m,a[1000],i,j,t=0,k;
	scanf("%d%d",&n,&m);//n shi ge shu
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
			for(k=i+1;k<n;k++)
		{	if(m==a[j]+a[k])
		t++;break;	}

if(t!=0)
printf("yes");
else
printf("no");

	return 0;
}