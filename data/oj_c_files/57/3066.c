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
	int n,i,len,j;
	char s[51][20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(s[i]);
	}
		for(i=0;i<n;i++)
	{
		len=strlen(s[i]);
		if(s[i][len-1]=='y' && s[i][len-2]=='l')
		{
			int j;
			for(j=0;j<len-2;j++)
				printf("%c",s[i][j]);
		}
		else if(s[i][len-1]=='g' && s[i][len-2]=='n' && s[i][len-3]=='i')
		{
			int j;
			for(j=0;j<len-3;j++)
				printf("%c",s[i][j]);
		}
		else if(s[i][len-1]=='r' && s[i][len-2]=='e')
		{
			int j;
			for(j=0;j<len-2;j++)
				printf("%c",s[i][j]);
		}
		printf("\n");
	}

}