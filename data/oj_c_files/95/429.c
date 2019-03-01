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
	char strf[80],strs[80];
	int lf,ls,i;
	gets(strf);gets(strs);
	lf=(int)(strlen)(strf);
	ls=(int)(strlen)(strs);
	for(i=0;i<lf;i++)
	{
		if((strf[i]>='A')&&(strf[i]<='Z'))
		{
			strf[i]=strf[i]-'A'+'a';
		}
	}
    for(i=0;i<ls;i++)
	{
		if((strs[i]>='A')&&(strs[i]<='Z'))
		{
			strs[i]=strs[i]-'A'+'a';
		}
	}
	
	
	if (strcmp(strf,strs)<0)
	{
		printf("<");
	}
	else if (strcmp(strf,strs)>0)
	{
		printf(">");
	}
    else if (strcmp(strf,strs)==0)
	{
		printf("=");
	}
	return 0;
}

