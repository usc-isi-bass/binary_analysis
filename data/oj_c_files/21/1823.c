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
	int i,a[100],n,s=0;
	float sum=0,aver,b[100],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	aver=sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>aver)
			b[i]=a[i]-aver;
        else b[i]=aver-a[i];
		t=(t>=b[i])?t:b[i];
	}
	for(i=0;i<n;i++)
		if(b[i]==t)
		{
			s++;
		if(a[i]<aver)
		{
			printf("%d",a[i]);
		}
		}
	for(i=0;i<n;i++)
		if(a[i]>aver&&b[i]==t)
		{
			if(s==2)printf(",%d",a[i]);
			if(s==1)printf("%d",a[i]);
		}
}
	




