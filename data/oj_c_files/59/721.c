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

//****************************
//?????? 1200012971**
//???5.cpp **
//???2012.11.11 **
//****************************
int main()
{
	int i, j, n, a[100][100] = {0}, d, m = 0;                        //?????? 
	char  b[100][100];                                                 //????????
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)                                          //??????????
		{
			cin >> b[i][j];                                               //????????@?????????????????1
			if (b[i][j] == '@')
				a[i][j] = 1;
		}
	}
	cin >> d;                                                    //????
	for (int k = 1; k < d; k++)
	{
		for (i = 0; i < n; i ++)
		{
			for (j = 0; j < n; j ++)
			{
				if (b[i][j] == '@')                                //???????? ?????
				{
					if (j == 0)                                   //????????????????????????????????
					{
						if (i == 0)                                  //????????
						{
							a[i + 1][j] = 1;
							a[i][j + 1] = 1;
						}
						if (i == n - 1)                            //?????????
						{
							a[i - 1][j] = 1;
							a[i][j + 1] = 1;
						}
						if (i != 0 && i != n - 1)                //?????????????????
						{
							a[i - 1][j] = 1;
							a[i][j + 1] = 1;
							a[i + 1][j] = 1;
						}
					}
					if (j == n - 1)                              //??????
					{
						if (i == 0)                                //???????
						{
							a[i + 1][j] = 1;
							a[i][j - 1] = 1;
						}
						if (i == n - 1)                             //????????
						{
							a[i - 1][j] = 1;
							a[i][j - 1] = 1;
						}
						if (i != 0 && i != n - 1)                   //?????????????
						{
							a[i - 1][j] = 1;
							a[i][j - 1] = 1;
							a[i + 1][j] = 1;
						}
					}
					if (j != 0 && j != n - 1)                      //????????
					{
						if (i == 0)                                    //?????
						{
							a[i + 1][j] = 1;
							a[i][j - 1] = 1;
							a[i][j + 1] = 1;
						}
						if (i == n - 1)                            //??????
						{
							a[i - 1][j] = 1;
							a[i][j - 1] = 1;
							a[i][j + 1] = 1;
						}
						if (i != 0 && i != n - 1)                       //????????
						{
							a[i - 1][j] = 1;
							a[i][j - 1] = 1;
							a[i + 1][j] = 1;
							a[i][j + 1] = 1;
						}
					}
				}
			}
		}
		for (i = 0; i < n; i++)                                  //???????????@
		{
			for (j = 0; j < n; j ++)
			{
				if (a[i][j] == 1)
				{
					if (b[i][j] == '#')                            //????????????????0
						a[i][j] = 0;
					else 
						b[i][j] = '@';
				}
			}
		}
	}
	for (i = 0; i < n; i++)                                  //??????????????d???????
	{
		for (j = 0; j < n; j++)
		{
			m += a[i][j];
		}
	}
	cout << m;
	return 0;
	}
	






						
					



	