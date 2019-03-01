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
	int n,a[20001],i,j,t,f;
	scanf("%d",&n);
	scanf("%d",&f);
	printf("%d",f);
	for(i=1;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		for(j=1;j<=i-1;j++)
		{
			t=a[i]-a[j];
			if(t==0)
				break;
		}
		if(t==0||a[i]==f)
			continue;
			printf(",%d",a[i]);
	}
	return 0;
}