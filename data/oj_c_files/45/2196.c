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
	char str1[51], str2[51];
	cin.getline(str1,51,' ');
	cin.getline(str2,51);
	int i, flag = 0;
	int len = strlen(str1), j;
	for (i = 0; str2[i] != '\n'; i++)
	{
		flag = 0;
		if( str2[i] == str1[0])
		{
			for( j = 0; j < len ; j++)
			{
				if( str2[i+j] == str1[j])
					;
				else
				{
					flag = 1;
					break;
				}

			}
		}
		else
	       {flag = 1;}
	
		if( flag == 0)
		{
			cout << i << endl;
			break;
		}
	}

	return 0;
}
