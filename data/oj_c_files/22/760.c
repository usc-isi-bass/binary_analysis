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
	unsigned int a[301];
	char b;
	int i=1,j,tr,p=0;
	while(1)
	{
		scanf("%d",&a[i]);
		scanf("%c",&b);
		if(b!=',')
			break;
		i++;
	}
	if(i==1)
	{printf("No");p=1;}
    else
	{for(j=i;j>=2;j--)
	{
		if(a[j]!=a[j-1])break;
		if(j==2) 
		{p=1;printf("No");}
	}
	}

	if(p!=1)
	{
		for(j=i;j>=2;j--)
	{
		if(a[j]>=a[j-1])
		{tr=a[j-1];a[j-1]=a[j];a[j]=tr;}
	}
	for(j=i;j>=3;j--)
	{
		if(a[j]>=a[j-1]&&a[j]!=a[1]||a[j-1]==a[1])
		{tr=a[j-1];a[j-1]=a[j];a[j]=tr;}
	}
	printf("%d",a[2]);
	}

}