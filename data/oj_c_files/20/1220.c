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
	char str[10],substr[10];
	int first=1;
	while (scanf("%s%s",str,substr)!=EOF)
	{
		int i,max=-1,loc,len;
	//	scanf("%s%s",&str,&substr);
		len=strlen(str);
		for (i=0;i<len;i++) 
			if (str[i]>max) 
			{
				max=str[i];
				loc=i;
			}
		if (!first) printf("\n");
		
		for (i=0;i<=loc;i++) printf("%c",str[i]);
		for (i=0;i<strlen(substr);i++) printf("%c",substr[i]);
		for (i=loc+1;i<len;i++) printf("%c",str[i]);
		if (first) first=0;
		
	}
	return 0;
}
