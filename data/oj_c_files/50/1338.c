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

//****************************************
//*   ?????                         *
//*   ??????                       *
//*   ?????2011?12?18?           *
//****************************************


int main()
{
	int w, i, j, day, a, b, c;
	cin >> w;//w??????????
	for(i = 1; i <= 12; i ++)//i???i??
	{
		a = 0; 
		b = 0; 
		c = 0;//abc?????28?30?31????
		for(j = 0; j < i; j ++)//j??????
		{
			if(j == 2)
				a ++;
			else if(j == 4 || j == 6 || j == 9 || j == 11)
				b ++;
			else if(j != 0)
				c ++;
		}
		day = (28 * a + 30 * b + 31 * c + 12 + w) % 7;//????13?????
		if(day == 5)
			cout << i << endl;//???????i
	}
	return 0;
}