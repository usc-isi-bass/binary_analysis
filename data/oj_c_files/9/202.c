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
	int age[100],i,j,k,p=0,n;
	char a[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&a[i],&age[i]);
		if(age[i]>=60)p++;
	}
	for(j=1;j<=p;j++)
	{
		k=0;
		for(i=0;i<n;i++)
		{
			if(age[i]>age[k])
				k=i;

		}
		printf("%s\n",a[k]);
		age[k]=0;
	}
	for(i=0;i<n;i++)
	{
		if(age[i]!=0)
		{
			printf("%s\n",a[i]);
		}
	}

}