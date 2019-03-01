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
	char s[30],i,l,j;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s",s);
		l=strlen(s);
		if(s[l-1]=='y')
		{
			for(i=0;i<l-2;i++)
				printf("%c",s[i]);
			printf("\n");
		}
		if(s[l-1]=='g')
		{
			for(i=0;i<l-3;i++)
				printf("%c",s[i]);
			printf("\n");
		}
		if(s[l-1]=='r')
		{
			for(i=0;i<l-2;i++)
				printf("%c",s[i]);
			printf("\n");
		}


	}
}

			
