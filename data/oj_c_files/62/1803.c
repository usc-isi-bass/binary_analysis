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
	char ch[101]; 
	char *j, *q;
	char *i;
	char *p = ch;
	cin.getline(ch,101);
	for(; *p != '\0'; p++)
	{
		if(*p == ' ')
		{
			if(*(p + 1) == ' ')
			{
				for(j = p; *j != '\0'; j++)
				{
					*j = *(j + 1);
				}
				p--;
			}
		}
	}
	q = p;
	for(i = &ch[0]; i < q; i++)
	{
		cout << *i;
	}
	return 0;
}