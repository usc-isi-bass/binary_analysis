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
	char c;
	int a[1000]={0},b[1000]={0},d[1000]={0},i=0,j,n=0,t=0;
	while((c=getchar())!='\n')
	{
		if(c==',') i++;
		else
		{
			a[i]*=10;
			a[i]+=(c-'0');
		}
	}
	n=i+1;
	i=0;
	while((c=getchar())!='\n')
	{
		if(c==',') i++;
		else
		{
			b[i]*=10;
			b[i]+=(c-'0');
		}
	}
	for(i=0;i<n;i++)
		for(j=a[i];j<b[i];j++)
			d[j]++;
	for(i=0;i<n;i++)
		if(b[i]>t)
			t=b[i];
	j=0;
	for(i=0;i<t;i++)
		if(d[i]>j)
			j=d[i];
	printf("%d %d",n,j);
	return 0;
}