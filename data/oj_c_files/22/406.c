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
	int a[300],i,j,k,b,c;
	int t1=-1;
	int t2=-1;

	char z;
	for(i=0;i<300;i++)
	{
		scanf("%d%c",&a[i],&z);
		if(z=='\n')
		{k=i;break;}
	}
	for(i=0;i<=k;i++)
	{
		if(a[i]>=t1)
			t1=a[i];
	}
	for(j=0;j<=k;j++)
	{
		if(a[j]<t1&&a[j]>=t2)
	t2=a[j];
	}
	if(t2==-1)
		printf("No");
	else
		printf("%d",t2);
	printf("\n");
	return 0;
}
