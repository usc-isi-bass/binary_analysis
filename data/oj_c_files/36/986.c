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
	int alen,blen,i,j;
	char e;
	char a[50]={'\0'};
	char b[50]={'\0'};
	scanf("%s %s",a,b);
	alen=strlen(a);
	blen=strlen(b);


	for(i=1;i<alen;i++)
	{
		for(j=0;j<alen-i;j++)
		{
			if(a[j]>a[j+1])
			{
				e=a[j];
				a[j]=a[j+1];
				a[j+1]=e;
			}
		}
	}
	
	
	for(i=1;i<blen;i++)
	{
		for(j=0;j<blen-i;j++)
		{
			if(b[j]>b[j+1])
			{
				e=b[j];
				b[j]=b[j+1];
				b[j+1]=e;
			}
		}
	}
	if(strcmp(a,b)==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
