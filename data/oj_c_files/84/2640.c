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
	int a[100];
	int i=0,n,j,max,second;
	scanf("%d",&n);
	while(i<n)
	{
	scanf("%d",&a[i]);
	i=i+1;
	}
	i=0;
	max=a[0];
	while(i<n)
	{
	if(max<a[i]) 
	{
		max=a[i];
	    j=i;
	}
	    i=i+1;
	}
	i=0;
	if(j!=0) second=a[0];
	else second=a[1];
    while(i<n)
	{
		if(second<a[i]&&a[i]<max) second=a[i];
		i=i+1;
	}
	printf("%d\n%d\n",max,second);
}
