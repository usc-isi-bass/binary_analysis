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
	char str[256], sub[256], rep[256];
	cin.getline(str, 256);
	cin.getline(sub, 256);
	cin.getline(rep, 256);
	int i, j, len1, len2;
	len1 = strlen(str);
	len2 = strlen(sub);
	for (i = 0; i <= len1 - len2; i++ )
	{
		j = 0;
		while (str[i + j] == sub[j] && j < len2)
			j++ ;
		if (j == len2)
		{
			while (j > 0)
			{
				j-- ;
				str[i + j] = rep[j];
			}
			break;
		}
	}
	cout << str << endl;

	return 0;
}