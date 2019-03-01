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
	unsigned int a[300],i=1,t=0,j;
	while (1>0)
	{
		scanf("%d",&a[t]);
		t++;
		char b;
		scanf("%c",&b);
		if(b!=',')
			break;
	}

	while(a[i]==a[0])
			i++;

	if(t==1||i==t||t==0)
		printf("No");
	else
	{
	for(i=0;i<t-1;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=1;i<t;i++)
	{
		if(a[i]!=a[0])
		{
	printf("%d",a[i]);
	break;}
	}
	}

	
}	