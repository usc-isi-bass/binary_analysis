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
	int m,i,p,j;
	long a,b;
	char s[1000],s1[1000];
	int ss[1000]={0};
	scanf("%s%s",&s,&s1);
	a=strlen(s);
	b=strlen(s1);
	if (a==b)
	{
	for (i=0;i<a;i++)
	{
		p=0;
		for (j=0;j<b;j++)
		{
			if (s[i]==s1[j]&&ss[j]==0)
			{
				ss[j]=1;
				p=1;
				break;
			}
		}
		if (p==0) 
		{ 
			printf("NO\n");
			break;
		}
	}
    if (p==1) printf("YES\n");
	}
	else printf("NO\n");
}