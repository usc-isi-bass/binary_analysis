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
	int i,k,max,n;
	scanf("%d",&n);
	int h[25],m[25];
	for(i=0;i<=n-1;i++)
		scanf("%d",&h[i]);
	m[n-1]=1;
	max=m[n-1];
	for(i=n-2;i>=0;i--)
	{m[i]=1;
	for(k=i+1;k<=n-1;k++)
		if((h[i]>=h[k])&&(m[i]<1+m[k]))
			m[i]=m[k]+1;
		if(m[i]>max)
			max=m[i];
	}
	printf("%d",max);
}