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
	int n, i, j, len;
	char str[10000][81];
	cin >> n;
	cin.get();
	for( i = 0; i < n; i ++ )
	{
		cin.getline(str[i], 81);
		len = strlen(str[i]);
		if( str[i][0] == '_' )
		{
			for( j = 1; j < len; j ++ )
			{
				if((str[i][j] - 'a' >= 0 && str[i][j] - 'a' <= 25) ||
			       (str[i][j] - 'A' >= 0 && str[i][j] - 'A' <=25 ) || 
				   (str[i][j] - '0' >= 0 && str[i][j] - '0' <= 9)  ||
				    str[i][j] == '_' )
				{
				}
			    else
				{
					cout << 0 << endl;
					break;
				}
			}
			if( j == len )
				cout << 1 << endl;
		}
		if( str[i][0] != '_' )
		{
			if((str[i][0] - 'a' >= 0 && str[i][0] - 'a' <= 25) ||
			   (str[i][0] - 'A' >= 0 && str[i][0] - 'A' <=25 ))
			{
				for( j = 1; j < len; j ++ )
				{
					if((str[i][j] - 'a' >= 0 && str[i][j] - 'a' <= 25) ||
			           (str[i][j] - 'A' >= 0 && str[i][j] - 'A' <=25 ) || 
				       (str[i][j] - '0' >= 0 && str[i][j] - '0' <= 9)  ||
					    str[i][j] == '_'  )
					{
					}
			        else
					{
					    cout << 0 << endl;
					    break;
					}
				}
				if( j == len )
					cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}
	}
	return 0;
}