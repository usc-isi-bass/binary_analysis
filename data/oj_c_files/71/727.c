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

//****************************************************
//*  ? ? ?: homework.cpp                          *
//*  ?    ?: ???                                *
//*  ????: 2012?10?22?                        *
//*  ????: ???                                *
//****************************************************

int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; //??????(???) 
	int c[13]={0,31,29,31,30,31,30,31,31,30,31,30,31}; //??????(??) 
	int i, j, n, l, sd1, sd2, y, m1, m2;
	int b[2][145]; //???????,b[0]????,b[1]??? 
	for (i = 1; i <= 144; i++)
	{
		b[0][i] = 0;
		b[1][i] = 0;
	} //??? 
	for (i = 1; i <= 11; i++)
	{
		j = i;
		sd1 = 0;
		sd2 = 0;
		while (j < 12)
		{
			sd1 = sd1 + a[j];
			sd2 = sd2 + c[j];
			j++;
			b[0][(i - 1) * 12 + j] = b[0][(j - 1) * 12 + i] = (sd1 % 7 == 0); 
			b[1][(i - 1) * 12 + j] = b[1][(j - 1) * 12 + i] = (sd2 % 7 == 0); 
			//?????????????? 
			 
		}
	}
	
	cin >> n; 
	while (n--)
	{ 
		cin >> y >> m1 >> m2;
		l = (y % 400 == 0) || ((y % 4 ==0) && (y % 100 !=0)); //??????
		if (b[l][(m1 - 1) * 12 + m2]) cout << "YES" << endl;
			else cout << "NO" << endl; 	//??????? 
	}
	
	return 0;
}
