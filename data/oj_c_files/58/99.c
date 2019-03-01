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
	int n,i,flag;
	char a[100][100],*p[100];
	scanf("%d ",&n);
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		p[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		flag=1;
		if((*p[i]<'a'||*p[i]>'z')&&(*p[i]<'A'||*p[i]>'Z')&&(*p[i]!='_'))
			flag=0;
		for(;*p[i]!='\0';p[i]++)
		{
			if((*p[i]<'0'||*p[i]>'9')&&(*p[i]<'a'||*p[i]>'z')&&(*p[i]<'A'||*p[i]>'Z')&&*p[i]!='_')
				flag=0;
		}
		if(flag==1)
			printf("1\n");
		else
			printf("0\n");
	}
}




