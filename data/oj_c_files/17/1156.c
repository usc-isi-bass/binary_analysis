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



void fun(char a[])
{
	
	int len,i,j,n,bi=0,zuo,you,hao=0;
	char b[200];
	int c[200];
	len=strlen(a);
	for(j=0;j<len;j++)
	{
		if(a[j]=='('||a[j]==')')
		{
			b[bi]=a[j];
			c[bi]=j;
			bi+=1;
		}
	}
	for(j=0;j<bi-1;j++)
	{
		if(b[j]=='('&&b[j+1]==')')
		{
			zuo=j;
			you=j+1;
			hao=1;
			break;
		}
	}
	if(hao==0)
		return;
	while(b[zuo]=='('&&b[you]==')')
	{
		b[zuo]=1;
		b[you]=1;
		zuo-=1;
		you+=1;
	}
	for(j=0;j<bi;j++)
	{
		if(b[j]==1)
		{
			a[c[j]]=1;
		}
	}
	fun(a);
}

int main()
{
	int i,n,len,j;
	char a[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		len=strlen(a);
		puts(a);
		fun(a);
		for(j=0;j<len;j++)
		{
			if(a[j]!='('&&a[j]!=')')
				printf(" ");
			else if(a[j]=='(')
				printf("$");
			else if(a[j]==')')
				printf("?");
		}
		printf("\n");
	}
	return 0;
}

