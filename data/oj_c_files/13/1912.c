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
	int count,n,j,i=1;
	int a[20000];
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		scanf("%d",&a[i]);
		for(count=0,j=1;j<i;j++)
		{
			if(a[i]==a[j])
				count++;
		}
		if(i==1&&count==0)
			printf("%d",a[i]);
		else if(i!=1&&count==0)
			printf(" %d",a[i]);
	}
	return 0;
}
