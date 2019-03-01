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
	int h=1,n,m;int flag=1;
	int a[300];
	int b[300];
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
    b[1]=a[1];
	for(i=1;i<=n;i++)
	{
		flag=1;
		for(j=1;j<=h;j++)
		{
			if(a[i]==b[j]) flag=0;
		}
		if(flag==1)
		{
			h++;
			b[h]=a[i];
		}
	
	}
	if(h==1) printf("%d",a[1]);
	if(h>=2)
	{
    for(i=1;i<=h-1;i++)printf("%d,",b[i]);
	printf("%d",b[h]);
	return 0;
	}
}