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
	char s[2][101],c;
	int i,len,flag=0,count=0;
	while(scanf("%s",s[0])!=EOF)
	{
		len=strlen(s[0]);
		for(i=0;i<len;i++)
		{
			c=s[0][i];
			if(c=='(') flag++;
			if(c==')') flag--;
			if(flag>=0)
			{
				s[1][i]=' ';
				continue;
			}
			if(flag<0) 
			{
				s[1][i]='?';
				flag=0;
			}
		}
		flag=0;
		for(i=len-1;i>=0;i--)
		{
			c=s[0][i];
			if(c==')') flag++;
			if(c=='(') flag--;
			if(flag<0) 
			{
				s[1][i]='$';
				flag=0;
			}
		}
		flag=0;
		s[1][len]='\0';
		puts(s[0]);
		puts(s[1]);
		for(i=0;i<len;i++)
			s[0][i]=s[1][i]=0;
	}
	return 0;
}
		