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
	int i,n,t;
	char word[50][20]={'\0'},temp[20]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%s",word[i]);
	for(i=0;i<n;i++)
	{
		t=strlen(word[i]);
		if(word[i][t-1]=='r'||word[i][t-1]=='y')
		{
			strncpy(temp,word[i],t-2);
			strcpy(word[i],temp);
		}
		else
		{
			strncpy(temp,word[i],t-3);
			strcpy(word[i],temp);
		}
		for(t=0;t<20;t++) temp[t]='\0';
		printf("%s\n",word[i]);
	}
}
