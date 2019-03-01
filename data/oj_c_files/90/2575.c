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

//**************************************
//*  ????2.cpp                     *
//*  ??????                      *
//*  ?????2013?11?27?          *
//*  ????????                  *
//**************************************
int f(int x,int y)
{
	if (y==1)
		return 1;
	if (x==1)
		return 1;
	else
	if (x<=y)
		return f(x,x-1)+1;
    else
		return f(x,y-1)+f(x-y,y);
}
int main()
{
	int t,i,a[30],b[30];
	cin >> t;
	for (i=1;i<=t;i++)
	{
		cin >> a[i] >> b[i];
		cout << f(a[i],b[i]) << endl;
	}
	return 0;
}
