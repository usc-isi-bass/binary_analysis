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

//***********************************************************
//* ? ??1.cpp                                            *
//* ? ??? ? 1200012916                                 * 
//* ? ??2012?10?31?                                   *
//* ? ????                                             *
//***********************************************************

int main()
{
	
	//??????i, j, k,????a[15], ?????
	//?????????????sum
	int i, j, k, a[16] = {0}, sum;      
	while (cin >> a[0])  //?????????
	{
		if (a[0] == -1)
			break;
		i = 0;          //????????
		sum = 0;
		do                    //?do? while???????????
		{                     //????????
			i++;
			cin >> a[i]; 
		}
		while (a[i] != 0); 
		for (j = 0; j < i; j++)   //???for??????????
		{                         //???????????sum??
			for (k = 0; k < i; k++)
			{
				if (k != j && a[k] == 2 * a[j])
					sum += 1;
			}
		}
		cout << sum << endl;
	}

	return 0;
}
			