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
	int n,a[301]={0},i,b[301]={0},temp=1,t=1,j,min,x;
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		temp=1;
		for(j=1;j<=i;j++)
		if(b[j]==a[i])
		{
			temp=0;
			break;
		}
		if(temp==1)
		{
			b[t]=a[i];
			t++;
		}
	}
	    for(i=1;i<t-1;i++)
    {
    	printf("%d,",b[i]);
    }
    printf("%d",b[t-1]);
}