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
	int a[26],i,n,j,k,flag=0;
	char s[200],q[2];
	scanf("%d",&n);
	gets(q);
	for(i=0;i<n;i++)
	{
		gets(s);
		for(k=0;k<26;k++)
		{
			a[k]=0;
		}
		for(j=0;j<strlen(s);j++)
		{
			if(s[j]>='a'&&s[j]<='z')
				a[s[j]-97]++;
		}
		for(j=0;j<strlen(s);j++)
		{
			if(a[s[j]-97]==1)
			{printf("%c\n",s[j]);break;}
		}
		for(k=0;k<26;k++)
		{
			if(a[k]==1)
				flag++;
		}
		if(flag==0)
			printf("no\n");
		flag=0;
	}
}