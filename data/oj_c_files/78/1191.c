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

//**************************************************************
//*  ?  ?:???                                             *
//*  ?  ?:???  1200012861                                 *
//*  ?  ?:2012?10?8?                                      *
//**************************************************************
int main()
{
	int z, q, s, l, i, j, order[5], temp;
	for (z = 1; z <= 5; z++)
	{
		for (q = 1; q <= 5; q++)
		{
			for (s = 1; s <= 5; s++)
			{
				for (l = 1; l <= 5; l++)
				{
					if (((z + q) == (s + l))  && ((z + l) > (s + q))  && ((z + s) < q))
						                                        //????????????
					{
						order[1] = z;                           //????????
						order[2] = q;                           //????????
						order[3] = s;                           //????????
						order[4] = l;                           //????????
						break;                                  //????
					}
				}
			}
		}
	}
	
	z = order[1];                                               //????????z
	q = order[2];                                               //????????q
	s = order[3];                                               //????????s
	l = order[4];                                               //????????l
	
	for (j = 1; j <= 3; j++)                                    //????????
	{
		for (i = 1; i <= (4 - j); i++)                          //????
		{
			if (order[i] < order[i + 1])                        //????????
			{
				temp = order[i];                                //
				order[i] = order[i + 1];                        //
				order[i + 1] = temp;                            //???????
			}
		}
	}
	
	for (i = 1; i <= 4; i++)
	{
		if (order[i] == z)                                      //????????i?
			cout << "z " << 10 * order[i] << endl;              //???"z "?????
		if (order[i] == q)                                      //????????i?
			cout << "q " << 10 * order[i] << endl;              //???"q "?????
		if (order[i] == s)                                      //????????i?
			cout << "s " << 10 * order[i] << endl;              //???"s "?????
		if (order[i] == l)                                      //????????i?
			cout << "l " << 10 * order[i] << endl;              //???"l "?????
	}
	return 0;
}