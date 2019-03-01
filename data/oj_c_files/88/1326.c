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

int main ( )
{
	char str[31], *p = NULL;
	int i, n;
	cin.getline(str, 31);
	p = str;
	n = strlen(str);/*???????*/
	for(i = 0;i < n;i++)
	{
		if(*p - '0'>= 0 && *p - '0' <= 9 && *(p+1) - '0'>= 0 && *(p+1) - '0'<= 9)/*????????*/
		{
			cout << *p;
		}
		else if(*p - '0'>= 0 && *p - '0' <= 9 && (*(p+1) - '0'< 0 || *(p+1) - '0'> 9))/**p???????????*/
		{
			cout << *p <<endl;
		}
		p++;
	}
	return 0;
}