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
	char s[100];char s1[100];char s2[100];
	
	
	gets(s);
	gets(s1);
	gets(s2);
	char *p2=s;
	while(*p2!='\0')
	{
		int i=0;
		char temp[100];
		for(i=0;i<=99;i++)
		{temp[i]='\0';}
		i=0;
		do
		{
		temp[i]=*p2;
		p2++;
		i++;
		}
		while (*p2!=' '&&*p2!='\0');
		if(strcmp(s1,temp)==0) printf("%s",s2);
		else printf("%s",temp);
		if(*p2==' ') 
		{p2++;printf(" ");}
		
	}
	return 0;
}
