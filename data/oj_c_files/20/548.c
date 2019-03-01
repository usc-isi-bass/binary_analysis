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

int num(char st[]);
void conv1(char st[],int n);
void conv2(char st[],int n);
void result(char st1[],char st2[],char st3[]);
void main()
{
	char str[20],substr[4],str1[20],str3[20];
	while (scanf("%s%s",str,substr)!=EOF)
	{
		int n;
		n=num(str);/**/
		strcpy(str3,str);/**/
		conv1(str,n);/**/
		conv2(str3,n);/**/
		result(str,substr,str3);
	}
}
void conv1(char st[],int n)
{
	st[n]='\0';
}
void conv2(char st[],int n)
{
	int l,i;
	l=strlen(st);
	for(i=0;i<l-n;i++)
	{
		st[i]=st[i+n];
	}
	st[l-n]='\0';
}
int num(char st[])
{
	int i,l;
	char t;
	t=st[0];
	l=strlen(st);
	for(i=1;i<l;i++)
	{
		if(st[i]>t)
			t=st[i];
	}
	for(i=0;i<l;i++)
	{
		if(st[i]==t)
		{
			return (i+1);break;
		}
	}
}
void result(char st1[],char st2[],char st3[])
{
	 strcat(st1,st2);
	 strcat(st1,st3);
	 puts(st1);
}


