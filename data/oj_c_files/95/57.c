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

int main(int argc, char* argv[])
{
	int n,i;
	char s[100],t[100],*ps,*pt;
	char da[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char xiao[27]="abcdefghijklmnopqrstuvwxyz";
	gets(s);
	gets(t);
	for(ps=s,pt=t;*ps!='\0',*pt!='\0';ps++,pt++)
	{
		for(i=0;i<27;i++)
		{
			if(*ps==da[i])
				*ps=xiao[i];
			if(*pt==da[i])
				*pt=xiao[i];
		}
	}
    n=strcmp(s,t);
	if(n>0)
		printf(">\n");
	if(n<0)
		printf("<\n");
	else
		printf("=\n");
	return 0;
}