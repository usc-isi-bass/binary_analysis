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
	int n;
	int i,j;
	int tmpl;
	char word[50][50];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
		tmpl=strlen(word[i]);
		if(word[i][tmpl-1]=='r'||word[i][tmpl-1]=='y')
			word[i][tmpl-2]='\0';
		else if(word[i][tmpl-1]=='g')
			word[i][tmpl-3]='\0';
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",word[i]);
	}
}
