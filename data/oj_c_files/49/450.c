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


void huiwen(char str[500])
{
	int i, j, k, t, x, len, count;
	len = strlen(str);
	for ( j = 2; j < len + 1; j ++ )                                //j???????????
	{
		for ( i = 0; i <= len - j; i ++ )                           //i?????????   
		{
			count = 0;
			for ( k = i, t = i + j - 1; k < t; k ++, t -- )            //k, t???????????????????
			{
				if ( str[k] == str[t] )
					count ++;
			}
			if ( count == j / 2 )
			{
				for ( x = i; x < i + j; x ++ )
					cout << str[x];
				cout << endl;
			}
		}				                        
	}
}


int main ()
{
	char str[500];
	cin >> str;
	huiwen(str);
	return 0; 
}
	







