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
	int n,a[100],b[100],c=0,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{	
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{
			sum++;
			if(sum>c) c=sum;
		}
		else 
		{
			sum=0;
			continue;
		}

	}
	printf("%d",c);
	return 0;
}
