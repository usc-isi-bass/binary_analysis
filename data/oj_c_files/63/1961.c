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

//******************************
//???:3.cpp
//??: ??? 1300012754
//??:2013.11.1
//??:????
//******************************
int main()
{
	int x1, y1, x2, y2;     //????????x1,y1;????????x2,y2;
	int a[110][110];
	int b[110][110];        //???????
	int c[110][110];        //???????????
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));//???????

	int i, j;  //????

	//???????????????????????????????????????
	cin >> x1 >> y1;

	for (i = 1; i <= x1; i++)
	{
		for (j = 1; j <= y1; j++)
		{
			cin >> a[i][j];
		}
	}

	cin >> x2 >> y2;
	for (i = 1; i <= x2; i++)
	{
		for (j = 1; j <= y2; j++)
		{
			cin >> b[i][j];
		}
	}

	for (i = 1; i <= x1; i++)
	{
		for (j = 1; j <= y2; j++)    //??????????????x1,y2??????
		{
			//????C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ..... + A[i][q]*B[q][j]?????????
			for (int k = 1; k <= y1; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}

	//??????
	for (i = 1; i <= x1; i++)
	{
		cout << c[i][1];  //???????
		for (j = 2; j <= y2; j++)  //????????????????
		{
			cout << " " << c[i][j];
		}
		cout << endl;     //??????????
	}
	return 0;
}