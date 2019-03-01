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

main()
{
	int dao,a[25]={0},b[25],i,j,num;
	scanf("%d",&dao);
	for(i=0;i<dao;i++)
	{
		scanf("%d",&b[i]);
	}
    for(i=dao-1;i>=0;i--)
	{
		num=0;
		for(j=i;j<dao;j++)
		{
			if(b[i]>=b[j]&&num<=a[j])num=a[j];
		}
		a[i]=num+1;
	}
	num=a[0];
	for(i=1;i<dao;i++)
	{
		if(a[i]>=num)num=a[i];
	}
	printf("%d",num);
}
