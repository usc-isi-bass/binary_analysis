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

/**
??????
*/


int main()
{
	char str[101], flag[101];
	while( cin.getline(str, 101))
	{
		cout << str << endl;
		int len, num = 0;
		len = strlen(str);
		int i, j;
		for ( i = 0; i < len; i ++ )
			flag[i] = ' ';
		flag[i] = '\0';
		for ( i = 0; i < len; i ++ )
		{
			if ( str[i] == '(')
			{
				num ++;
				flag[i] = '$';
			}
			if ( str[i] == ')')
			{
				num --;
				if ( num >= 0 )
				{
					for ( j = i - 1; j >= 0; j -- )
						if ( str[j] =='(' )
						{
							flag[j] = ' ';
							str[j] = ' ';
							break;
						}
				}
				else
				{
					flag[i] = '?';
					num ++;
				}
			}
		}
		cout << flag << endl;
	}
	return 0;
}