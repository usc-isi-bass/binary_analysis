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
	char str[11],substr[4];
	char maxs;
	int j,max;
	while(scanf("%s%s",str,substr)!=EOF)  //???%s?????scanf????????
	{
		max=0;
		maxs=str[0]; //????strcpy??
		for(j=1;j<strlen(str);j++)
		{
			if(str[j]>maxs) {max=j;maxs=str[j];}
		}
		for(j=0;j<=max;j++) printf("%c",str[j]);
		printf("%s",substr);
		for(j=max+1;j<strlen(str);j++)
		{
			if(str[j]=='\0') break;
			else printf("%c",str[j]);
		}
		printf("\n");
	}	
	return 0;
}