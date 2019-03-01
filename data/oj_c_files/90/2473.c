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
//*?????(15-11) ????? **
//*?????? 1300012991 **
//*???2013.11.29 **
//********************************

int way(int app, int bas); //?????way?????????
int main()
{
	int t, i;
	cin >> t; //????
	for (i = 0; i < t; i++)
	{	
		int app = 0, bas = 0; //app??????bas?????
		cin >> app >> bas;
		cout << way(app, bas) << endl; //??
	}
	return 0;
}

int way(int app, int bas) //?????
{
	int count = 0; //count??????????0

	//???????????????????????????????0????0??????
	if(app == 1 || bas == 1 || app == 0 && bas > 0 || bas == 0 && app > 0)
		count = 1;
	if(app > 1 && bas > 1) //?????????1?????????????????????????
	{
		int ap1 = app - bas;
		int ba1 = bas - 1;
		count = way(app, ba1) + way(ap1, bas);
	}
	return count; //?????
}