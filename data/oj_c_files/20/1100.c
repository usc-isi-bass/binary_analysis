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
	char str[4],string[12];
	int i,j=0,max;
	while(scanf("%s %s",string,str)!=EOF)
    {
		max=0;j=0;
		for(i=0;i<strlen(string);i++)
			if(string[i]>string[max])
				max=i;
			for(i=strlen(string);i>=max+1;i--)
				string[i+3]=string[i];
			for(i=max+1;i<max+4;i++,j++)
				string[i]=str[j];
			for(i=0;string[i]!='\0';i++)
				printf("%c",string[i]);
			printf("\n");
	}
			return 0;
}
