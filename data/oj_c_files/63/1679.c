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

//********************************
//*???????    **
//*?????? 1300012855 **
//*???2013.11.1  **
//********************************


int main(void)
{
	int a[100][100], b[100][100]; // ????
	int x1, y1, x2, y2; // ?????
	int sum; // ???????????
	cin >> x1 >> y1; // ??????????
	for(int i = 0; i < x1; i++) // ???????
		for(int j = 0; j < y1; j++)
			cin >> a[i][j];
	cin >> x2 >> y2; // ??????????
	for(int i = 0; i < x2; i++) // ???????
		for(int j = 0; j < y2; j++)
			cin >> b[i][j];
	for(int i = 0; i < x1; i++) // ?????????????????????
		for(int j = 0; j < y2; j++)
		{
			sum = 0;
			for(int k = 0, l = 0; k < y1; k++, l++)
					sum += a[i][k] * b[l][j]; // ??????????
			if(j == 0) cout << endl;
			cout << sum ;
			if(j != y2 - 1) cout << ' ';
		}
		return 0;
}