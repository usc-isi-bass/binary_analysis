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

//*****************************
//*???????? **
//*?????? 1300012991 **
//*???2013.12.7 **
//*****************************

int app = 0; //??app??????
int see(double mon, int n, int k); //????see

int main() //???
{
	int mon, k; //mon??????k????????
	cin >> mon >> k; //??
	cout << see(mon, mon, k)-(mon-1)*k << endl; //??????see?????
	return 0;
}

//???????????mon-1?*k??????????????????see???mon???????????????????mon-1???????????mon-1?*k????
int see(double mon, int n, int k)
{
	if(n == 1) //n?????n???
		return ((pow((mon-1), (mon-1)))*mon);
	else
		app = see(mon, n-1, k) / (mon-1) * mon;
	return app;
}
