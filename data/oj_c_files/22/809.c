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
    int a[100];
	int i=0,n,tr;
	char b=',';
    while(b==',')
	{
		i=i+1;
		scanf("%d",&a[i]);
		scanf("%c",&b);
	}
	n=i;
	if(n==1)
	{
		printf("No");
		goto loop;
	}
	for(i=n;i>=2;i--)
	{
		if(a[i-1]!=a[i])
			break;
		if(a[i-1]==a[i]&&i==2)
		{printf("No");
		goto loop;}
	}
	for(i=n;i>=2;i--)
	{
		if(a[i-1]<a[i])
		{tr=a[i-1];a[i-1]=a[i];a[i]=tr;}
	}
	for(i=n;i>=3;i--)
	{
		if(a[i-1]<a[i]&&a[i]!=a[1]||a[i-1]==a[1])
		{tr=a[i-1];a[i-1]=a[i];a[i]=tr;}
	}
	printf("%d",a[2]);
loop:return 0;
}