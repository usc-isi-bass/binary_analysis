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
	int f(int array[],int l);
	int i,m,n,t,b[26]={0};
	char str[300];
	gets(str);
	t=strlen(str);
	for(i=0;i<t;i++)
	{
		m=0;
		m=str[i]-97;
		b[m]++;
	}
	n=f(b,t);
	if(n==0)
		printf("No");
	for(i=0;i<26;i++)
	{
		if(b[i]!=0)
			printf("%c=%d\n",i+97,b[i]);
	}
}

int  f(int array[],int l)
{
	int i,word=0;
	for(i=0;i<l;i++)
	{
		if(array[i]!=0)
			word++;
	}
	return(word);
}