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
	int a[300],b[300]={0,};
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int j,k,m;
	for(i=0,j=0;i<n;i++)
	{
		for(k=0,m=0;k<i;k++)
		{
			if(a[k]==a[i])
				m+=1;
		}
		if(m==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	
	for(i=0;i<j;i++)
	{
		printf("%d",b[i]);
		if(i<j-1)
			printf(",");
	}
	return(0);
}