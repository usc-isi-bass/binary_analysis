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
	int n,so[100],su[100],a[102]={0},i,d=0,c=0,b[102]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&so[i],&su[i]);
	}
	for(i=0;i<n;i++)
	{
		if(so[i]>=90&&so[i]<=140&&su[i]>=60&&su[i]<=90)
			a[i+1]=1;
	}
	a[n+1]=0;
	a[0]=0;
	for(i=0;i<n+2;i++)
	{
		if(a[i]==0)
		{
			b[c]=i-d-1;
			d=i;
			c++;
		
	
		}
	}
	int max=b[0];
	for(i=1;i<c;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	printf("%d",max);
	return 0;
}

