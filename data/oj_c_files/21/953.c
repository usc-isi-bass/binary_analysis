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
	int n,i,t=0,leap=0,la[2];
	double ave,max=0,sum=0,cha[300];
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
    }
    ave=sum/n;
    for(i=0;i<n;i++)
    {
		cha[i]=fabs(a[i]-ave);
		if(cha[i]>max)
		max=cha[i];
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			leap=leap+1;
			la[t]=a[i];
			t++;
		}
	}
	if(leap==1)
	printf("%d",la[0]);
	else
	printf("%d,%d",la[0],la[1]);
}