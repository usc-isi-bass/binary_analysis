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

/*-----------------------------------------*\
|? ? ?   ?????  		            |
|? ?      ????	                    |
|? ? ? ??2010 ? 11 ? 25 ?		    |
|? ?      ?1000012758		            |
\*-----------------------------------------*/ 
int main()
{
	int NumberOfChildren, Time, Jump[20], NumberOfJump, SumOfTime, i, j;
	//???????
	cin >> NumberOfChildren;
	for (i = 0; i < NumberOfChildren; i++)
	{
		//???????
		cin >> Time;
		memset(Jump, 0, sizeof(Jump));
		//?????????????
		for (j = 1; j <= Time; j++)
			cin >> Jump[j];
		//?????????
		for (j--; ; j--)
		{
			//?????
			SumOfTime = 3 * j + Jump[j];
			//??60?
			if (SumOfTime <= 60)
			{
				cout << (Jump[j] + 60 - SumOfTime) << endl;
				break;
			}
			//?????????57-60?
			else if (SumOfTime <= 63)
			{
				cout << Jump[j] << endl;
				break;
			}
		}
	}
	return 0;
}