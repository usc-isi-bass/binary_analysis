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

void cancel(char a[])
{
	int i,s;
	s=strlen(a);
	if(a[s-1]=='r'&&a[s-2]=='e')
	{
		for(i=0;i<s-2;i++)
		{
			printf("%c",a[i]);
		}
	}
	else if(a[s-1]=='y'&&a[s-2]=='l')
	{
		for(i=0;i<s-2;i++)
		{
			printf("%c",a[i]);
		}
	}
	else
		for(i=0;i<s-3;i++)
		{
			printf("%c",a[i]);
		}
		printf("\n");
}
void main()
{
	int n,i;
	char a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		cancel(a);
	}
}