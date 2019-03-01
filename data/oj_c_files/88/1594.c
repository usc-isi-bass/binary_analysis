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

// ******************************
// *** ????.cpp           ***
// *** ID:1000012895          ***
// *** ???                 ***
// *** 2010/12/10             ***
// ******************************
int main()
{
	char str[31];
	cin.getline(str,31);
	char *p = NULL;
	p = str;
	while(*p != '\0')
	{
		if(*p <= '9' && *p >= '0')
		{
			cout << *p;
			if(*(p+1) > '9' || *(p+1) < '0')
				cout << endl;
		}
		p++;
	}
	return 0;
}
