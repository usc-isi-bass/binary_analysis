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
	int n;int m;scanf("%d",&n);
	char str[50][50];
	int i;int k;
	for(i=0;i<=n;i++)
	{
		gets(str[i]);
		k=strlen(str[i]);
		if((str[i][k-1]=='r'&&str[i][k-2]=='e')||(str[i][k-1]=='y'&&str[i][k-2]=='l'))
		{str[i][k-1]='\0';str[i][k-2]='\0';}
		else if((str[i][k-1]=='g'&&str[i][k-2]=='n'&&str[i][k-3]=='i'))
		{
			str[i][k-1]='\0';str[i][k-2]='\0';str[i][k-3]='\0';
		}
		
		
	}
	int j;char kk;
	for(i=0;i<=n;i++)
	{
		for(j=0;(kk=str[i][j])!='\0';j++)
		{
			printf("%c",str[i][j]);
		}
		printf("\n");
	}
scanf("%d",&i);
	return 0;
}