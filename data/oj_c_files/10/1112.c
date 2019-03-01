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

int a[25];
int n;
int changdu(int i)
{
	int j,max;
	max=0;
	if(i==n-1)
	max=0;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<=a[i])
	{
		if(changdu(j)>max)
		max=changdu(j);
	}
	}
	return(max+1);
	
}
int main()
{
	int max,i;
	max=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(changdu(i)>max)
		max=changdu(i);
	}
	printf("%d",max);
	
} 
