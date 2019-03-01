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

void main()
{
	int n,a[300],m=1,i,j,x;
	scanf("%d",&n);
	scanf("%d",a);
	for (i=1;i<n;i++)
	{
		scanf("%d",&x);
		for (j=0;j<m;j++)
			if (*(a+j)==x) break;
		if (j==m)
		{
			*(a+m)=x;
			m++;
		}
	}
	printf("%d",*a);
	for (i=1;i<m;i++)
		printf(",%d",*(a+i));
}



