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

//**************************
//*???????          *
//*?????? 1200012775 *
//*???2012/11/13        *
//**************************
int main()
{
	char str[500];	//?????
	int leap, i, length, k, j;	//??????
	for (i = 0; ; i++)
	{
		cin.get(str[i]);	//????
		if (str[i] == '\n')	//?????
		{
			length = i - 1;	//??????????1
			break;	//????
		}
	}
	for (j = 1; j < length; j++)	//???2?length
		for (i = 0; i <= length - j; i++)	//???0???
		{
			leap = 0;	//????leap?0
			for (k = 0; k <= j/2 + 1; k++)
				if (str[i + k] != str[i + j - k])	//????
				{
					leap = 1;	//?????
					break;	//????
				}
			if (leap == 0)	//????
			{
				for (k = i; k <= i + j; k++)
					cout << str[k];	//?????
				cout << endl;
			}
		}
	return 0;
}