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
	int a[11],b[11],i,j,p;
	scanf("%d%d",&a[0],&b[0]);
	for(i=1;i<=10;i++)
	{
		a[i]=a[i-1]/2;
		if(a[i]==1)
			break;
	}
	for(j=1;j<=10;j++)
	{
		b[j]=b[j-1]/2;
		if(b[j]==1)
			break;
	}
	for(i=0;i<=10;i++)
	{
		for(j=0;j<=10;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",a[i]);
                p=1;
				break;
			}
		}
		if(p==1)
			break;
	}
}