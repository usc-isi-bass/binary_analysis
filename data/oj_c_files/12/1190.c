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
	int b;
	scanf("%d",&b);
	while(b!=-1)
	{	
		int a[16]={0};
		int i,j=0,k;
		int sum=0;
		a[j]=b;
		while(a[j]!=0)
		{ 
			j++;
			scanf("%d",&a[j]);
		}
		for(i=0;i<j-1;i++)
		{
			for(k=i+1;k<j;k++)
			{
				if(a[k]==a[i]*2||a[i]==a[k]*2)
				{
					sum++;
				}
			}
		}
		printf("%d\n",sum);
		scanf("%d",&b);
	}
}
