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

void f(char str[],int k)
{
	int i;
	if(str[k-3]=='i'&&str[k-2]=='n'&&str[k-1]=='g')
	{
		for(i=0;i<k-3;i++)
			printf("%c",str[i]);
	}
	else if(str[k-2]='l'&&str[k-1]=='y')
	{
		for(i=0;i<k-2;i++)	
			printf("%c",str[i]);
	}
	else if(str[k-2]='e'&&str[k-1]=='r')
	{
		for(i=0;i<k-2;i++)	
			printf("%c",str[i]);
	}
}
void main()
{
	int k,t,i;
	char str[50][30];
	scanf("%d",&k);
	for(i=0;i<=k;i++)
		gets(str[i]);
	for(i=0;i<=k;i++)
	{
		t=strlen(str[i]);
		f(str[i],t);
		printf("\n");
	}
		
}


