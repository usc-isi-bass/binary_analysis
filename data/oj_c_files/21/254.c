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

main()
{
	int n,i,j;
	float ave,x,sum=0;
	float a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;

	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(a[j]>a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}

	if((ave-a[0])<(a[n-1]-ave)) printf("%d\n",(int)a[n-1]);
	else if((ave-a[0])>(a[n-1]-ave)) printf("%d\n",(int)a[0]);
	else printf("%d,%d\n",(int)a[0],(int)a[n-1]);
}