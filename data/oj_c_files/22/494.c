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
	int second(int b[],int t);
	int i=0,j,z=1,a[300];
	char c;
    do
	{
		scanf("%d",&a[i]);
		i++;
		scanf("%c",&c);
	}
	while(c!='\n');
	for(j=0;j<i-1;j++)
	{
		if(a[j]!=a[j+1])
		{
			z=0;
			break;
		}
	}
	if(i==1||z==1)printf("No\n");
	else printf("%d\n",second(a,i));
}
int second(int b[],int t)
{
	int i,j,s;
	for(j=t;j>1;j--)
	{
		for(i=1;i<=j-1;i++)
	{
		if(b[i-1]>b[i])
		{
			s=b[i-1];
			b[i-1]=b[i];
			b[i]=s;
		}
	}
	}
	for(i=t-1;i>1;i--)
	{
		if(b[i-1]!=b[i])break;
	}
	return(b[i-1]);
}