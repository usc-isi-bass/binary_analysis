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

int main ()
{
	int a[300]={0},n,i,first,second;
	scanf("%d",&a[0]);
	for(i=1;i<300;i++)
		scanf(",%d",&a[i]);
	n=i;first=0;second=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>first)
			first=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<first&&a[i]>=second)
			second=a[i];
	}
	if(second==0) printf("No\n");
	else printf("%d\n",second);
}
