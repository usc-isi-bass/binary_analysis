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
	int left[101],len,top=0,i,j;
	char str[101];
	while(gets(str))
	{
		top=0;
		puts(str);
		len=strlen(str);
		for(i=0;i<len;i++) //????????str[i]~~
		{
			if(str[i]=='(')
			{
				left[top]=i;
				top++;
			}
			else if(str[i]==')')
			{
				if(top)
				{
					str[i]=' ';
					str[left[top-1]]=' '; //??top??????
					top--;  //??????????????--
				}
			    else
					str[i]='?';
			}
			else
				str[i]=' ';
		}
		for(j=0;j<len;j++)
			if(str[j]=='(')
			str[j]='$';
		puts(str);
	}
	return 0;
}