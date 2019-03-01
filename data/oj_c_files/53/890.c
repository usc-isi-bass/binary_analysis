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
	int n[300],i,j,num;
	int k=1,a[300]={0},p=0;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	      scanf("%d",&n[i]);
	for(i=1;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			if(n[i]==n[j])
			{
				n[i]=-1;
			}
		}
	}
	for(i=0;i<=num-1;i++)
	{
		if(n[i]>=0)
		{
			a[k]=n[i];
			k++;
			p++;
		}
	}
	for(k=1;k<p;k++)
		printf("%d,",a[k]);
	printf("%d",a[p]);
	
	return 0;
}

