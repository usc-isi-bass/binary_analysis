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
	int n,i,x,k;
	char s[100][100],*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",&s[i]);
	for(i=0;i<n;i++)
	{
		k=0;
		x=strlen(s[i]);
		p=s[i];
		if((*p!='_')&&(*p<'a'||*p>'z')&&(*p<'A'||*p>'Z'))
		{	printf("no\n");k=1;}
		if(k==0)
		for(p=s[i]+1;p<s[i]+x;p++)
		{
			if(((*p!='_')&&(*p<'a'||*p>'z'))&&(*p<'0'||*p>'9')&&(*p<'A'||*p>'Z'))
			{
				printf("no\n");k=1;break;
			}
		}
		if(k==0)	printf("yes\n");
	}
}
