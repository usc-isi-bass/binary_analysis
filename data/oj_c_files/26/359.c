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

/*	???:???????
	???:1000012896 leo
	??:2010.12.13
	????:???????
	*/
int main()
{
	char str[101];
	int flag = 1;
	cin.getline (str, 100);
	char * p, * q;
	for (p = str + 1; p <= str + strlen(str) - 2;)
	{
		if (* p == ' ' && flag == 0)
		{
			for (q = p; q <= str + strlen(str) - 1; q++)
				* q = * (q + 1);
			continue;
		}
		if ( * p == ' ')
			flag = 0;
		else 
			flag = 1;
		p++;
	}
	cout << str;
	return 0;
}
		