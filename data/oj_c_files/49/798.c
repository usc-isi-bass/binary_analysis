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

//*************************************************
//***???????***
//***??????***
//***???2012.11.14***
//*************************************************
int main ()
{
	int i = 0,j,k,p,length;
	char a[100];
	do
	{
		a[i] = getchar();   
	}
	while (a[i++] != '\n');                   //?????
	length = i;                               //???????
	for (i = 2; i <= length; i++)                  //??????????????
	{
		for (j = 0; j <= length - i - 1; j++)     //??????????????
		{
			p = 1;
			for (k = 0; k <= (i - 1) / 2; k++)
			{
				if (a[j + k] != a[j + i - 1 - k])   //?????????????
					p = 0;
			}
			if (p == 1)
			{
				for (k = j; k < i + j; k++)
					cout << a[k];
				cout << endl;
			}
		}
	}
	return 0;
}