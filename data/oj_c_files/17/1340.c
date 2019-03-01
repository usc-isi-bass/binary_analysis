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
	typedef struct _Parenthesis
	{
		char ch;
		int idx;
	} Parenthesis;
	Parenthesis paren[100];
	char str[101];
	while(gets(str))
	{
		int i,top=0;
		puts(str);
		for(i=0; str[i]; i++)
		{
			if(str[i] == '(')
			{
				paren[top].ch = '(';
				paren[top].idx = i;
				top++;
			}
			else if(str[i] == ')')
			{
				if(top == 0)
					str[i] = '?';
				else
				{
					str[i] = ' ';
					str[paren[--top].idx] = ' ';
				}
			}
			else
				str[i] = ' ';
		}
		for(i=0; i<top; i++)
			str[paren[i].idx] = '$';
		puts(str);
	}
	return 0;
}