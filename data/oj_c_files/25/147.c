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
//???????2?N??
//??????
//?????2010.12.18
//???????2?N??
//****************************************
int main ()
{
	int N, i, j, m;//???????????i,j,m
	unsigned a[31],b[31];//???????????
	
	memset(a,0,sizeof(a));//?a????
	a[0] = 1;
	for (i = 1; i < 31; i++)
		a[i] = 0;//?a????1
	cin >> N;
	if (N == 0)
		cout << "1" << endl;//???0??????1
	else 
	{
		for(m = 0; m < N; m++) 
		{
			memset(b,0,sizeof(b));//??????b????
			i = 30;
			while(a[i] == 0) i--;//?????????
			//??????2
			for ( j = 0; j <= i; j++)
				b[j] = a[j] * 2;
			for ( j = 0; j < i + 1; j++)
			{
				//??10???
				if ( b[j] >= 10)
				{
					b[j + 1] += b[j] / 10;
					b[j] %= 10;
				}
			}
			//?a????????2
			for (j = 0; j < i + 2; j++)
				a[j] = b[j];
		}
		j = i + 1;
		while ( b[j] == 0) j--;//????????????
		for (; j >= 0; j--)
			cout << b[j];
		cout << endl;
	}
	return 0;
}
