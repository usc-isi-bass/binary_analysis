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
 * part.cpp
 *
 *  Created on: 2012-11-25
 *      Author: Lsj
 */

int disintegerate(int a, int b)//?????a????
{
	if (a == b || b == 1)//a b????b=1??????
		return 1;
	if (a > b)//a??b?b???1????0???0
		return 0;
	int ans = 0;//ans???
	for (int i = a; i <= b; i++)//?a?b??
	{
		if (b % i == 0)//b??????
			ans = ans + disintegerate(i, b / i);//??????
	}
	return ans;//??ans
}

int main()//main??
{
	int Time;
	cin >> Time;//????
	while (Time > 0) {
		int n;
		cin >> n;//??n
		cout << disintegerate(2, n) << endl;//????
		Time--;//Time?1
	}

	return 0;
}//??
