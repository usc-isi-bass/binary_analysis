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

//????????
//???2010.12.06
//??????
//???1000012856

int apple(int, int);
int main()
{
	//t?????i?????num?????way??????
	int t, i, num[20][2], way[20];
	cin >> t;
	for(i = 0; i < t; i++)
	{
		cin >> num[i][0] >> num[i][1];
	//?apple????way
		way[i] = apple(num[i][0], num[i][1]);
	}
	for(i = 0; i < t; i++)
		cout << way[i] << endl;		//??????????

	return 0;
}

int apple (int a, int b)			//?apple?????
{
	if(b == 0 || b == 1)			
		return 1;
	else if (b > a)
		return apple (a, a);
	else
		return apple(a, b - 1) + apple (a - b, b);
}

