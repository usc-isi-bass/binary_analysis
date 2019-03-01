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
	int n,i,j,sum=0,len=0,final;
	unsigned short a[500][500];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if (a[i][j]==0)
				sum++;
		}
    for (i=0;i<n&&len==0;i++)
		for (j=0;j<n;j++)
		{
			if (a[i][j]==0)
				len++;
		}
	final=(sum-2*len)/2*(len-2);
	printf("%d\n",final);
	return 0;
}
			
