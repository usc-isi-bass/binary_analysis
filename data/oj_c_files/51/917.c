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
	char s[550],b[6];
	int i,j,k,l,n,a[550]={0};
	scanf("%d",&n);
	getchar();
	gets(s);
	for (i=0;s[i]!='\0';i++)
	{
		for (j=i+1;s[j]!='\0';j++)
		{
			l=0;
			for (k=0;k<=n-1;k++)
			{
				if (s[i+k]!=s[j+k]) l=1;
			}
			if (l==0) a[i]++;
		}
	}
	for (i=0;s[i]!='\0';i++)
	{
		l=0;
		for (j=0;s[j]!='\0';j++)
		{
			if (a[i]<a[j]) l=1;
		}
		if (l==0) break;
	}
	if (a[i]==0)
	{
		printf("NO");
		return 0;
	}
	printf("%d\n",a[i]+1);
	k=a[i];
	for (i=0;s[i]!='\0';i++)
	{
		if (a[i]==k)
		{
			for (j=0;j<=n-1;j++)
			{
				b[j]=s[i+j];
			}
			b[j]='\0';
		printf("%s\n",b);
		}
	}
return 0;
}