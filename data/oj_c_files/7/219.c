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
	char src[256] = {0};
	char subString[256] = {0};
	char replacement[256] = {0};	
	char pre[256] = {0};
	char *post;
	scanf("%s %s %s", src, subString, replacement);
	char *start;
	start = strstr(src,subString); //????????????
	if(start != NULL)    //????????
	{
		char *q = pre, *p = src;  //?pre: src?subString?????
		while(p != start)
		{
			*q = *p;
			p++;
			q++;
		}
		*q = '\0';
	
	 post = start + strlen(subString);  //?post:src?subString?????
	 strcat(pre, replacement);  //pre + replacement + post????????
	 strcat(pre, post);
	 printf("%s", pre);
	}
	else
		printf("%s", src);
	return 0;
}