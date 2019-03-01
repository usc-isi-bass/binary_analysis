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
	char s[80];
	gets(s);
	char* p;
	p = s;
	int n;
	while(*p != '\0')
	{
		if(p-s > 0 && (*(p-1) <'0' || *(p-1) > '9' ) && n == 0)
		{
			cout << endl;
			n++;
		}
		if(*p>='0' && *p<='9')
		{
			cout << *p;
			n = 0;
		}
		p++;
	}
	return 0;
}