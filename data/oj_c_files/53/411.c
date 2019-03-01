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
	int n,i,k,j,r;
	int a[300];
	int index[300]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		{
			for(k=0;k<i;k++)
			{
				if(a[i]==a[k])
					index[i]=1;
			}
		}
	}
for(r=n-1;r>=0;r--)
	{if (index[r]==0) break;}
	for(j=0;j<n;j++)
	{
		if (index[j]==1) continue;
		printf("%d",a[j]);
	if (j==r) break;
		
printf(",");
		}
		
}



