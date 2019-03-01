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
	int n;
	scanf("%d",&n);
	int a[100];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		int b[100];
		b[0]=1;
		b[1]=1;
		int j;
		for(j=2;j<100;j++)
		{
			b[j]=b[j-1]+b[j-2];
		}
		printf("%d\n",b[a[i]-1]);
	}
	return 0;
}
	
