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
	int a[300]={0},b[300]={0},i,j,n,s;
	float sum=0,aver,demin,demax;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		s=0;
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
				s++;
		}
		b[s]=a[i];
	}
	aver=sum/n;
	demin=aver-b[0];
	demax=b[n-1]-aver;
	if(demin==demax)
		printf("%d,%d",b[0],b[n-1]);
	if(demin>demax)
		printf("%d",b[0]);
	if(demin<demax)
		printf("%d",b[n-1]);
	return 0;
}

