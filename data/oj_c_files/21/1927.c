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
	int n,i,all=0;
	float ave,cha=0,a[300],sum=0,chan[300];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	//printf("%f",ave);
	for(i=0;i<=n-1;i++)
	{
		chan[i]=fabs(ave-a[i]);
		//printf("%f",chan[i]);
		if(chan[i]>cha)
		{
			cha=chan[i];
		}
	}
	for(i=0;i<=n-1;i++)
	if(chan[i]==cha)
		all++;
	for(i=0;i<=n-1;i++)
	{if(chan[i]==cha&&all!=1)
	{
		printf("%.0f,",a[i]);
		all--;
	}
	else if(chan[i]==cha&&all==1)
		printf("%.0f",a[i]);}
	getchar();
	getchar();
}
