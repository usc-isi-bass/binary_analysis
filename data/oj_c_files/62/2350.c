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
	char c;
	int f=1;
	while ((c=getchar())!=EOF)
	{
		if (c!=' ')
		{
			cout<<c;
			f=1;
		}//deal with words

		else if (f) {
			cout<<c;
			f=0;
		}//deal with space
	}
	return 0;
}