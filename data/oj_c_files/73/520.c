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
//*???????   **
//*?????? 1300012713 **
//*???2013.11.02  **
//********************************
int main() 
{ 
	int a[5][5], num = 0; //????a?????num
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 1; j <= 5; j++)
		{
			cin >> a[i-1][j-1]; //??????
		}
	}
	for(int m = 1; m <= 5; m++) //?????
	{
		for (int n = 1; n <= 5; n++)
		{
			//???????
			if(a[m-1][n-1] >= a[m-1][0] && a[m-1][n-1] >= a[m-1][1] 
				&& a[m-1][n-1] >= a[m-1][2] && a[m-1][n-1] >= a[m-1][3] 
				&& a[m-1][n-1] >= a[m-1][4] && a[m-1][n-1] <= a[0][n-1] 
				&& a[m-1][n-1] <= a[1][n-1] && a[m-1][n-1] <= a[2][n-1] 
				&& a[m-1][n-1] <= a[3][n-1] && a[m-1][n-1] <= a[4][n-1])
			{
				cout << m << " " << n << " " << a[m-1][n-1]; //??? ????????
			    num = num + 1; //????
			}
		}
	}
	if(num == 0) cout << "not found"; //????????not found
	return 0;
}

