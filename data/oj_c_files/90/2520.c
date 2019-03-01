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
//*?????? 1300012809  **
//*???2013.11.29         **
//*????????         **
//****************************
int m, n, k;
int fenfa(int x, int y);                                   //?????
int main()
{
	int i, j, t;
	cin >> t;                                              //?????????
	for (i = 1; i <= t; i++)
	{
		cin >> m >> n;                                     //???????????
	
		k = fenfa(m, n);                                   //??????
		cout << k << endl;                                 //??
	}
	return 0;
}
int fenfa(int x, int y)                                    //????
{ 
	if (x == 1) return 1;                                  //?????????????1????1
	if (y == 1) return 1;
	if (x == 0 || y == 0) return 1;
	if (x < 0 || y < 0) return 0;                          //????????0
// ???????????????N?????M???????????N-1?????M????????????
// ??????????????N?????M????????????N?????M-N??????????
	if (x != 1 && y != 1 && x != 0 && y != 0) return (fenfa(x, y-1) + fenfa(x-y,y)); 
}
