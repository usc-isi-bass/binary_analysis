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

/*
??????7???????.cpp
?????? 1200012854
???2012?10?8?
*/
int main()
{
	int n, i, a, b,sum = 0;  
	//cout << "please input a number n(n < 100)" <<endl;
	cin >> n; //?????????
	do
	if (n >= 100)  //?????n????100??????
	{
		cout << "error,please input again" <<endl;
		cin >> n;
	}
	else
		break;  //???n????????????????
	while(1);
	for (i = 1 ; i <= n ; i++)
	{
		a = i/10;  //??????????a????????
		b = i - (a * 10);  //b????????
		if (i % 7 == 0 || a == 7 || b == 7)  //??????7????7???????????
			continue;
		sum = sum + i * i;  //?????????????????
	}
	cout << sum <<endl;  //??????
	return 0;
}

