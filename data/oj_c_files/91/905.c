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
	char a[200], b[200], *p=a, *q=b;
	cin.getline(a, 200);
	while(*(p+1) != '\0')
	{
        *(q++) = *p + *(p + 1);
	    p++;
	}
	*q = a[0] + *p;
	*(q+1) = '\0';
	q = b;
	while(*q != '\0')
	    cout << *(q++);
	return 0;
}