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
	int n,j,i,count,key;
	scanf("%d",&n);

	count=0;
	key=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			
		}
		for(j=0;j<n;j++)
		{
			if(a[j]==0&&a[j+1]==0)
			{
				break;
			}
			if(a[j]==0)
				key=1-key;
			if(a[j]*key!=0)
				count=count+1;
		}


		
	}
	printf("%d",count);
	return 0; 
}
