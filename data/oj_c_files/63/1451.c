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

//**************************************
//????4.cpp                        *
//?????  1?  1200012895          *
//???2012?11?5?                  *
//???????                       *
//**************************************
int main()
{
	int x1, y1, x2, y2, a[101][101], b[101][101], c[101][101] = {0}, i, j, k;     //x1?y1?a?????????x2?y2?b??????
	                                                                              //c????????i?j?k?????
	cin >> x1 >> y1;
	for (i = 1; i <= x1; i++)
	{
		for (j = 1; j <= y1; j++)
		{
			cin >> a[i][j];                                                       //??a?????
		}
	}
	cin >> x2 >> y2;
	for (i = 1; i <= x2; i++)
	{
		for (j = 1; j <= y2; j++)
		{
			cin >> b[i][j];                                                       //??b?????
		}
	}
	for (i = 1; i <= x1; i++)
	{
		for (j = 1; j <= y2; j++)
		{
			for (k = 1; k <= y1; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];                            //??c???????
			}
			if (j == 1)
				cout << c[i][j];                                                  //??????????????????
			else 
				cout << " " << c[i][j];
		}
		cout << endl;                                                             //??
	}
	return 0;
}
