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

//********************
//*??; ??????*
//*??:???       *
//*2012-12-19        *
//********************
int main()
{
	int n, a, i=1, j=1, m[30];      //?????????
	cin >> n; 
	for (i=1;i<=n;i++)
	{ 
		int m[30]={1,1};       //???????????2??1
		cin >> a;              //??????
		for (j=2;j<=a-1;j++)   //???????3????
		{
			m[j]=m[j-1]+m[j-2];
		}
		cout << m[a-1] << endl;//????
	}
	return 0;
}