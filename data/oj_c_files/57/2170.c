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
	int i,n,len;
	char word[100][20],d;
	scanf("%d",&n);  d=getchar();
	for(i=0;i<n;i++)
	{
		gets(word[i]);
		d=getchar;
	}
	for(i=0;i<n;i++)
	{
		len=strlen(word[i]);
		if(word[i][len-1]=='r'||word[i][len-1]=='y')
		{
			word[i][len-2]='\0';
			printf("%s\n",word[i]);
		}
		else
		{
			word[i][len-3]='\0';
			printf("%s\n",word[i]);
		}
	}
}