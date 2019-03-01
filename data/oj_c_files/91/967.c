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

//******************************
//*???                      *
//*1200062704                  *
//*?????                  *
//*12?9?                     *
//******************************
int main()
{
	char a[101];
	cin.getline(a, 101, '\n');
	char *p = NULL;
	p = a;
	while(*p != '\0')
	{
		if (*(p + 1) != '\0')
			cout << (char) (*p + *(p + 1));
		else
			cout << (char) (*p + a[0]);
		p++;
	}

	return 0;
}