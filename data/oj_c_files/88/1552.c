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
	int i, len;
	char str[40], *q;
	cin.getline(str, 40);
	len = strlen(str);
	q = str;
	for( i = 0; i < len; i++ )
	{
		if( *(q + i) - '0' >= 0 && *(q + i) - '0' <= 9 )
		{
			cout << *(q + i);
			if( *(q + i + 1) - '0' < 0 || *(q + i + 1) - '0' > 9 )
				cout << endl;
		}
	}
	return 0;
}