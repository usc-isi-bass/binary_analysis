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
	int n,a[100],b[100],z=0,zm=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]<=140&&a[i]>=90&&b[i]>=60&&b[i]<=90)
		{
			z++;
			if(i==n-1)
			{
				if(z>zm)
				{
				zm=z;
				}
			}
		}else
		{
			if(z>zm)
			{
				zm=z;
			}
			z=0;
		}
	}
	printf("%d",zm);
	return 0;
}
