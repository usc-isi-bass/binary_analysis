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
* @file 1000010424_6.cpp
* @author ???
* @date 2010?11?24
* @description
* ??????:1049 ????    
*/



int main()
{
	int n, badNum;								//?????????????
	int i, j;									//?????
	int badTotal, time, place, lastPlace;		//??????????????????

	cin >> n;

	for(i = 1; i <= n; i++)
	{
		cin >> badNum;							//????????
		time = 0;
		badTotal = 0;
		lastPlace = 0;

		for(j = 1; j <= badNum; j++)
		{
			cin >> place;

			time += place - lastPlace;			//???????????

			if(time < 60)						//??????
			{
				if(time <= 57)
				{
					time += 3;					//time????????
					badTotal += 3;
				}
				else
				{
					badTotal += 60 - time;
					time += 3;
				}
			}
			else
				;

			lastPlace = place;
		}

		cout << 60 - badTotal << endl;
	}

	return 0;
}