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
	char str[15],substr[5];
	while(scanf("%s %s",&str,&substr)!=EOF)
	{
		int k=0,i=0;
		char *p,max;
		for(p=str,max=str[0];*p!='\0';p++,i++)
		{
			if(*p>max)max=*p,k=i;
		}
		for(p=str;p<=(str+k);p++)
		{
			printf("%c",*p);
		}
		printf("%s",substr);
		for(p=str+k+1;*p!='\0';p++)
		{
			printf("%c",*p);
		}
	    	printf("\n");
	}
}