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
	char ch[300];
	int n,k=0,a[100]={0},p=0,l,i,j;
	scanf("%s",ch);
	n=strlen(ch);
	for(i=65;i<=90;i++,k++)
	{
		for(j=0;j<n;j++)
		{
			if(ch[j]==i)
				a[k]=a[k]+1;
		}
		if(a[k]>0)
			printf("%c=%d\n",i,a[k]);
	}
	for(i=97;i<=122;i++,k++)
	{
		for(j=0;j<n;j++)
		{
			if(ch[j]==i)
				a[k]=a[k]+1;
		}
		if(a[k]>0)
			printf("%c=%d\n",i,a[k]);
	}
	for(l=0;l<52;l++)
	{
		if(a[l]>0)
			p=p+1;
	}
	if(p==0)
		printf("No\n");
}