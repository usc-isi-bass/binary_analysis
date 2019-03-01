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

char s[100] = {0};

int main ( )
{
	int n;
	cin >> n;
	cin.getline ( s, 100 );
	for ( int i = 0; i < n; i ++ )
	{
		cin.getline ( s, 100 );
		int len = strlen ( s ), j = 1;
		if ( ! ( s[0] == '_' || ( s[0] >= 'A' && s[0] <= 'Z' ) || ( s[0] >= 'a' && s[0] <= 'z' ) ) )
		{
			cout << 0 << endl;
			continue;
		}
		for ( j = 1; j < len; j ++ )
		{
			if ( ! ( s[j] == '_' || ( s[j] >= 'A' && s[j] <= 'Z' ) || ( s[j] >= 'a' && s[j] <= 'z' ) || ( s[j] >= '0' && s[j] <= '9' ) ) )
			{
				cout << 0 << endl;
				break;
			}
		}
		if ( j == len )
			cout << 1 << endl;
	}
	return 0;
}