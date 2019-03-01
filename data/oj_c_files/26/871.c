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

int main()  										//???
{
	int i=0 , len;
	char str[100];
	char *p;
	gets(str);
	p = str;
	len = strlen(str);
		for(; ; p++)			//?????????????????????????????????????????????
		{
			if(*p != ' ')
				cout << *p;
			else
			{
				p++;
				if(*p != ' ')
					cout << ' ';
				p--;
			}
				i++;
				if(i>=len)
					break;
		}
	return 0;
}