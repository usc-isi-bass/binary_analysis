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

//???1134 ??
//??????
//???2010.11.7

int a[100][20] = {0};         //????????a[100][20]???????
int i = 1;                    //??????i???????????
int b[100] = {0};             //????????b[100]???????????

void sort();                  //????sort()?????
void compare();               //????compare()???????????
int main()
{
	int p = 0;
	int j = 0;

	do
	{
		j = 1;
		do
		{
			cin >> a[i][j];
			j ++;
		}while ((a[i][j-1] != 0) && (a[i][j-1] != -1));
		i ++;
	}while (a[i-1][j-1] != -1);           //??i???????a[i]?

	sort();                               //????
	compare();
	
	for (p = 1; p <= i - 2; p ++)
	{
		cout << b[p] << endl;             //????
	}

	return 0;
}

void sort()
{
	int x = 0;
	int y = 0;
	int p = 0;
	int t = 0;
	for (p = 1; p <= i - 2; p ++)          //???????a[i]??
		for (x = 1; x <= 14; x ++)
			for (y = 1; y <= 15 - x; y ++)
			{
				if (a[p][y] > a[p][y + 1])
				{
					t = a[p][y];
					a[p][y] = a[p][y + 1];
					a[p][y + 1] = t;
				}
			}
}

void compare()
{
	int x = 0;
	int y = 0;
	int p = 0;
	for (p = 1; p <= i - 2; p ++)            //??????????????
		for (x = 1; x <= 15; x ++)
			for (y = x; y <= 15; y ++)
			{
				if ((a[p][y] == 2 * a[p][x]) && (a[p][x] != 0))
					b[p] ++;
			}
}