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
	char a[100], girl, boy;
	cin.getline( a, 100 );
	boy = a[0];
	int i, j;
	for ( i = 0; a[i] != '\0'; i++ )
	{
		if ( a[i] != boy )
		{
			girl = a[i];
			break;
		}
	}
	for ( i = 0; a[i] != '\0'; i++ )
	{
		if ( a[i] == girl )
		{
			for ( j = i - 1; j >= 0; j-- )
			{
				if ( a[j] == boy )
				{
					cout << j << " " << i << endl;
					a[j] = ' ';
					a[i] = ' ';
					break;
				}

			}
		}
	}
	return 0;
}