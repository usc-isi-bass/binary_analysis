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
	int f(char *str);
	int n,i,p;
	char str[100][100],*t;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(str[i]);
	}
	for(i=0;i<n;i++)
	{
		t=str[i];
		p=f(t);
		printf("%d\n",p);
	}
	return 0;
}
int f(char *str)
{
	int p=1,i=0;
	if(*str=='_' || (*str>='A' && *str<='Z')||(*(str+i)>='a' && *(str+i)<='z'))
		p=1;
	else
		p=0;
	for(i=1;*(str+i)!='\0';i++)
	{
		if((*(str+i)>=48 && *(str+i)<=57)||(*(str+i)>='A' && *(str+i)<='Z')||(*(str+i)>='a' && *(str+i)<='z')||*(str+i)=='_')
			p=p;
		else
		{
			p=0;
			break;
		}
	}
	return p;
}
