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
	int i,j,k=0,a[301]={0},n,t,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
		flag=1;
		scanf("%d",&t);
		for(j=0;j<k;j++)
			if(t==a[j])
			{flag=0;break;}
		if(flag==1)a[k++]=t;
		}
	if(k>1)for(i=0;i<k-1;i++)printf("%d,",a[i]);
	printf("%d\n",a[k-1]);
}