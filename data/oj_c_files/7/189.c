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
	char string[256],subString[256],replacement[256],buffer[256]={0},result[256]={0};
	scanf("%s\n%s\n%s",string,subString,replacement);
	int mainlen=strlen(string),sublen=strlen(subString);
	int i;
	for(i=0;i<=mainlen-sublen;i++)
	{
		strncpy(buffer,(string+i),sublen);
		if(!strcmp(buffer,subString))
		{
			strncpy(result,string,i);
			strcat(result,replacement);
			strcat(result,(string+i+sublen));
			printf("%s",result);
	        return 0;
		}
	}
		printf("%s",string);
		return 0;
}
