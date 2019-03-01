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
	char a[100],b[100];
	int i,j,c,t;
	scanf("%s %s",a,b);
	c=strlen(a);
	for(i=0;i<c-1;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if(a[j]>a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=0;i<c-1;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if(b[j]>b[i])
			{
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
		}
	}
	if(strcmp(a,b)==0)
		printf("YES");
	else
		printf("NO");
}