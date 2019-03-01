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
	int n,i,a[1000],b[1000],k=0,c[1000]={0},max;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&(b[i]<=90))
	{
		k=k+1;
	}
	 else
	{ 
		k=0;
	}
	 c[i]=k;
	}
	max=c[0];
	for(i=0;i<n;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
	}
	}
	printf("%d",max);
return 0;
}