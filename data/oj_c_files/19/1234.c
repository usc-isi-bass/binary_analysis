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
	char *s[100],*a,*b;
	int i=0,j=0,x;	
	for(i=0;i<100;i++)
	{
		s[i]=(char *)malloc(100*sizeof(char));
		for(j=0;j<100;j++)
			s[i][j]='\0';
	}
	for(i=0;;i++)
	{		
		for(j=0;;j++)
		{
			scanf("%c",&s[i][j]);
			if(s[i][j]==' '||s[i][j]=='\n')
			{
				break;
			}
		}
		if(s[i][j]=='\n')
		{
			x=i;
			break;
		}
	}
	for(i=0;i<=x;i++)
	{
		for(j=0;;j++)
			if(s[i][j]==' '||s[i][j]=='\n')
			{
				s[i][j]='\0';
				break;
			}
	}
	a=(char *)malloc(100*sizeof(char));
	b=(char *)malloc(100*sizeof(char));
	gets(a);
	gets(b);
	for(i=0;i<=x;i++)
		if(!strcmp(s[i],a))
		{
			for(j=0;j<100;j++)
				s[i][j]='\0';
			strcpy(s[i],b);			
		}
	for(i=0;i<x;i++)
		printf("%s ",s[i]);
	printf("%s\n",s[x]);
}