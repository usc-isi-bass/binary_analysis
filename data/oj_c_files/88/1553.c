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

//****************************************************************************************
//*  ??????? 																	 *
//*  ????????????????30???????????????????????    *
//*  ???????					   													 *
//*  ???2010?12?8?															     *
//****************************************************************************************
int main()
{
	char str[31];										//?????
	int num, i, p = 0;									//????
	cin.getline (str, 31);								//?????
	num = strlen(str);									//????????
	for (i = 0; i < num; i++)							//?????????
	{
		if ((*(str + i) >= '0') && (*(str + i) <= '9'))
		{
			if (p > 0)
			{
				cout << endl;
				p = 0;
			}
			cout << *(str + i);
		}
		else 
			p++;
	}
	return 0;
}