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
	char str[500] , parlindrome[500] ;
	int len ;
	cin >> str ;
	len = strlen(str) ;
	for (int i = 2 ; i <= len ; i++)
	{
		for (int j = 0 ; j <= len - i ; j++)
		{
			int k ;
			for (k = 0 ; k < i ; k++)
			{
				if (str[j+k] == str[j+i-1-k])
				{
					parlindrome[k] = str[j+k] ;
				}
				else
					break ;
			}
			parlindrome[k] = '\0' ;
			if (k == i)
				cout << parlindrome << endl ;
		}
	}
	return 0 ;
}