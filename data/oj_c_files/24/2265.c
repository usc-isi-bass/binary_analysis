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


void main(void)
{
	char s[4000];
	gets(s);

	char *start[200];
	start[0]=s;
	int l=0,n=1;
	while(s[l]!=0)
	{
		if(s[l]==','||s[l]==' ')
		{
			s[l]=0;
			if(s[l+1]!=','&&s[l+1]!=' ')
				start[n++]=s+l+1;
		}

		l++;
	}

	int len[200],i,max=0,min=0;
	for(i=0;i<=n-1;i++)
	{
		len[i]=strlen(start[i]);

		if(len[max]<len[i]) max=i;
		else if(len[min]>len[i]) min=i;
	}

	puts(start[max]);
	puts(start[min]);
}