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
	char str[100][81];
	cin >> n;
	cin.get();
	for ( i = 0; i < n; i ++ )
	{
		cin.getline(str[i],81);
		len = strlen(str[i]);
		if ((str[i][0] == '_') || ((str[i][0] >='a') && (str[i][0] <='z')) || ( (str[i][0] >= 'A') && (str[i][0] <='Z')))
		{
			for ( j = 1; j < len; j ++)
			{
				if ((str[i][j] == '_') || ((str[i][j] >='a') && (str[i][j] <='z')) || ( (str[i][j] >= 'A') && (str[i][j] <='Z')) || ( (str[i][j] >= '0') && (str[i][j] <='9')))
					continue;
				else break;
			}
			if ( j == len ) 
				cout << "1" <<endl;
			else cout << "0" << endl;
		}
			else cout << "0" << endl;
	}
	return 0;
}
