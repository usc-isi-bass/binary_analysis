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

void main()
{
	int n;
	char STR[103]={" "},str[103]={" "},str1[103]={" "};
	char *p,*q,*s;
	gets(STR);
	strcat(STR,str);
	strcat(str,STR);
	n=strlen(str);
	s=str1;
	for(p=str+n-2;p>=str;p--)
	{
		if(*p==' ')
		{
			q=p+1;
			do
			{
				*s=*q;
				s++;
				q++;
			}
			while(*q!=' ');
			*s=' ';
			s++;
		}
		else
			continue;
	}
	*(s-1)='\0';
	printf("%s",str1);
}
			

