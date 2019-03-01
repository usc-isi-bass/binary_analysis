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
	int n,i,j,flag;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
		if(i==0)
		{printf("%d",a[0]);}
		for(j=0;j<i;j++)
		{

			if(a[i]==a[j])
			{flag=0;break;}
			else
				flag=1;	
		}
		if(flag==1)
			printf(",%d",a[i]);
	}
}

