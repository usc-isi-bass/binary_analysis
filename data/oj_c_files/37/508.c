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
	char a[1000];
	int i,t,length,b[26],flag,count=0;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%s",a);
	length=strlen(a);
	for(i=0;i<26;i++)
	{
		b[i]=0;
	}
	for(i=0;i<length;i++)
	{
		flag=a[i]-'a';
		b[flag]++;
	}
	for(i=0;i<length;i++)
	{
		if(b[a[i]-'a']==1)
		{
			printf("%c\n",a[i]);
			count=1;
			break;
		}
	}
	if(count==0)
		printf("no\n");
	count=0;
	}
}