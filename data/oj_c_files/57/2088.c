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
	int i,n,l[50];
	char s[50][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   scanf("%s",s[i]);
	   l[i]=strlen(s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s[i][l[i]-2]=='e'&&s[i][l[i]-1]=='r')
		{
			s[i][l[i]-2]='\0';
			s[i][l[i]-1]='\0';
		}
		else if(s[i][l[i]-2]=='l'&&s[i][l[i]-1]=='y')
		{
			s[i][l[i]-2]='\0';
			s[i][l[i]-1]='\0';
		}
		else if(s[i][l[i]-2]=='n'&&s[i][l[i]-1]=='g'&&s[i][l[i]-3]=='i')
		{
			s[i][l[i]-2]='\0';
			s[i][l[i]-1]='\0';
			s[i][l[i]-3]='\0';
		}
		printf("%s\n",s[i]);
	}
	return 0;
}