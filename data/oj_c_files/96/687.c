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

//*************************************
//* ????3.cpp *
//* ??????1200012844 *
//* ?????2012?11?13? *
//* ???????13 *
//**************************************

int main()
{
	int i, r;
	char num[1000];
	cin >> num;
	int len = strlen(num);//???????len
	if(len == 1 || ((len == 2) && (num[0] == '1') && (num[1] < '3')))
	{
		cout << 0 << endl;
		cout << num << endl;//?????13?????0???????
	}
	else 
	{
		if(((num[0] - '0') * 10 + (num[1] - '0')) / 13 != 0)
		{
			cout << ((num[0] - '0') * 10 + (num[1] - '0')) / 13;
			r = ((num[0] - '0') * 10 + (num[1] - '0')) % 13;//???????????13???????13???
		}
		else 
			r = ((num[0] - '0') * 10 + (num[1] - '0'));//???????????13????????
		for (i = 2; i < len; i++)//????????????
		{
			cout << (r * 10 + num[i] - '0') / 13;
			r = (r * 10 + num[i] - '0') % 13;
		}
		cout << endl;
		cout << r << endl;//??????
	}
	return 0;
}