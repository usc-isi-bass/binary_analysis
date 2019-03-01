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
	int n,m[500],w[500],i,k,j,q=0,b;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for (
	 i=0;i<n;i++
	 ) 
	{
		if
			(
		m[i]%2!=0
		)
		{
		w[q]=m[i];
		q=q+1;
		}
	}
	b=q;
	for (
	 i=1;i<q+1;i++
	 ) 
	{
	for(
		j=i;j>0;j--
		)
	{
	if  (
		w[j-1]<=w[j]
		)
		{
					w[j]=w[j];
					w[j-1]=w[j-1];
		}
		else
		{ 
			k=w[j];
			w[j]=w[j-1];
			w[j-1]=k;
		}
	}
	}
for(
	 i=1;i<b;i++
	 )
{
	printf("%d,",w[i]);
}
printf("%d",w[b]);
		return 0;
}
