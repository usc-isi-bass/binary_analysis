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
	char str[101], *p_str, temp;
	cin.getline(str,101);
	temp = str[0];
	p_str = str;
	while (*(p_str + 1)!= '\0')
	{
		*p_str = *p_str + *(p_str + 1);
		p_str++;
	}
	*p_str = *p_str + temp;
	cout << str;
	return 0;
}

	