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
	char s[81],k[81];
	int x1,x2;
	int i;
	gets(s);
	gets(k);
	x1=strlen(s);
	x2=strlen(k);
	if (strlen(s)==strlen(k))
	{
		for(i=0;i<x1;i++)
		{
			if(s[i]>=65&&s[i]<=90)
				s[i]+=32;
			if(k[i]>=65&&k[i]<=90)
				k[i]+=32;
		}
		if(strcmp(s,k)==0)
			printf("=\n");
		else if(strcmp(s,k)<0)
			printf("<\n");
		else if(strcmp(s,k)>0)
			printf(">\n");
	}
	else
	{
		for(i=0;i<x1;i++)
		{
			if(s[i]>=65&&s[i]<=90)
				s[i]+=32;
		}
		for(i=0;i<x2;i++)
		{
			if(k[i]>=65&&k[i]<=90)
				k[i]+=32;
		}
		if(strcmp(s,k)==0)
			printf("=\n");
		else if(strcmp(s,k)<0)
			printf("<\n");
		else if(strcmp(s,k)>0)
			printf(">\n");
	}

	
	return 0;
}
