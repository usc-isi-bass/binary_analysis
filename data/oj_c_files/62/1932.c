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
	char str[1000];
	int i = 1, l, j;
	cin.getline( str, 1000, '\n' );
	l = strlen(str);
	while ( str[i] != '\0' )
	{
		if ( str[i - 1] == ' ' && str[i] == ' ' )
		{
			for ( j = i; j < l - 1; j++ )
			{
				str[j] = str[j + 1];
			}
			l--;
		}
		else
			i++;
	}
	for ( i = 0; i < l; i++ )
		cout << str[i];
	return 0;
}