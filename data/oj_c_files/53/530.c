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
	int n,a[300],i,j,k,c=1,index;
	scanf("%d",&n);
    scanf("%d",&a[0]);
	for(i=1,index=0;i<n;i++)
	{
		scanf("%d",&k);
		for(j=0;j<=index;j++)
		{
			if(a[j]!=k)			
				c=c*1;				
			else c=0;
		}
		if(c==1)
		{
			index=index+1;
			a[index]=k;
		}
		c=1;
		
	}
	for(i=0;i<=index-1;i++)
		printf("%d,",a[i]);
	printf("%d",a[index]);
	
}