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
	int n,a,b,k,j,i;
	int m[100];
	j=0;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		scanf("%d %d",&a,&b);
		if(90<=a&&a<=140&&60<=b&&b<=90)
		{
            j=j+1;
		    m[k-1]=j;
		}
	    else
		{	m[k-1]=0;
	        j=0;
		}

	}
	for(i=1;i<=n;i=i++)
	{
		if(m[0]<m[i-1])
			m[0]=m[i-1];
		if(m[0]>=m[i-1])
		    m[0]=m[0];
	}
	printf("%d",m[0]);
	return 0;
}