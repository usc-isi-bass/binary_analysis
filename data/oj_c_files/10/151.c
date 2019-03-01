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
	int n,i,j,a[1000],b[1000],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		b[i]=1;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<i;j++)
			if(a[j]>=a[i])
				b[i]=MAX(b[j]+1,b[i]);
    for(i=0;i<n;i++)
		max=MAX(max,b[i]);
	printf("%d\n",max);
}
