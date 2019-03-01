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

int main ()
{
	int n, i, j;
	cin >> n;
	cin.get();
	char str[81];
	for ( i = 1; i <= n; i++ )
	{
		cin.getline(str,81);
		if ( (str[0] >= 'a' &&  str[0] <= 'z') || ( str[0] >= 'A' &&  str[0] <= 'Z') || str[0] == '_' )
		{
			for ( j =1; str[j] != '\0'; j++ )
			{
				if ( (str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= '0' && str[j] <= '9') )
					continue;
				else if ( str[j] != '_' || str[j] == ' ' )
				{
					cout << "0" << endl;
					break;
				}
			}
			if ( str[j] == '\0')
				cout << "1" << endl;
		}
		else
			cout << "0" << endl;
	}
	return 0;
}
