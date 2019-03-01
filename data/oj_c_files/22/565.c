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

unsigned a[N],temp;
void main()
{
	int i=0,j,max,n=0;
	char tag[N];
	while(tag[i-1]!='\n')
	{
		scanf("%d%c",&a[i],&tag[i]);
		i++;
		n++;
	}
	for(i=0;i<n-1;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
			if(a[max]<a[j])max=j;
			if(i!=max)
			{temp=a[i];a[i]=a[max];a[max]=temp;}
	}
	if(n==1||a[0]==a[n-1])
		printf("No\n");
	else
		for(i=1;i<n;i++)
			if(a[i]<a[0])
			{printf("%d\n",a[i]);break;}
}