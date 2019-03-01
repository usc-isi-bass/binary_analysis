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
	int n,a[300],b[300]={0};int i,j,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
				b[i]=1;
		}
	}
	
	for(i=0;i<n;i++)
	{
		//printf("%d",b[i]);
		if(b[i]==0)
		{
			if(flag==1)
			printf(",");
			printf("%d",a[i]);
			flag=1;
		}
	}
}
