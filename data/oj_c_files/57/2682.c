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
	char s[50][30];
	int n,i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		gets(s[i]);
	for(i=0;i<n;i++)
	{
		if(s[i][strlen(s[i])-1]=='y'&&s[i][strlen(s[i])-2]=='l')
			s[i][strlen(s[i])-2]='\0';
		else if(s[i][strlen(s[i])-1]=='r'&&s[i][strlen(s[i])-2]=='e')
			s[i][strlen(s[i])-2]='\0';
		else if(s[i][strlen(s[i])-1]=='g'&&s[i][strlen(s[i])-2]=='n'&&s[i][strlen(s[i])-3]=='i')
			s[i][strlen(s[i])-3]='\0';
	}
	for(i=0;i<n;i++)
	{
		puts(s[i]);
	}
}