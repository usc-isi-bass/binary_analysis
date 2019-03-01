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
	char a[300];
	int b[30],c[30],i,n,m=0;
	for(i=0;i<26;i++)
	{
		b[i]=0;
		c[i]=0;
	}
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]<='Z'&&a[i]>='A')
		{
			b[a[i]-'A']++;
			m++;
		}
		if(a[i]<='z'&&a[i]>='a')
		{
			c[a[i]-'a']++;
			m++;
		}
	}
	if(m==0)
	{
		printf("No");
	}
	for(i=0;i<26;i++)
	{
		if(b[i]!=0)
		{
			printf("%c=%d\n",'A'+i,b[i]);
		}
	}
	for(i=0;i<26;i++)
	{
		if(c[i]!=0)
		{
			printf("%c=%d\n",'a'+i,c[i]);
		}
	}
	return 0;
}
