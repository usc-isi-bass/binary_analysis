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
	int i=0,j,k,l,m,n,t[1002];
	int a[1800],b[1800];
	char fei=',';
	while(fei==',')
	{
		scanf("%d",&a[i]);
		fei=getchar();	
		i++;
	}
	i=0;
	fei=',';
	while(fei==',')
	{
		scanf("%d",&b[i]);
		fei=getchar();	
		i++;
	}
	l=i;
	for(i=0;i<1002;i++)
	{
		t[i]=0;
		for(j=0;j<l;j++)
			if(a[j]<=i&&b[j]>i)
				t[i]++;
	}
	int max=t[0];
	for(i=0;i<1002;i++)
	{
		if(t[i]>max)
			max=t[i];
	}
	printf("%d %d",l,max);
}