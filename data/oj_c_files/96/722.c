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
*8-3
*??? 1200012851
*??13
*2012.11.13
**/
int main()
{
	char str[100];//??????????str
	int result[100];//??????result
	int i, len, r;//??????i,?????len,??r
	cin.getline (str, 100);//?????
	len = strlen(str);//??????
	if (len == 1)//?????????
	{
		r = str[0] - '0';
		cout << "0" << endl << r << endl;
	}
	else
	{
		if (len == 2)//?????????
		{
			r = ((str[0] - '0') * 10 + (str[1] - '0')) % 13;
			cout << ((str[0] - '0') * 10 + (str[1] - '0')) / 13 << endl << r << endl;
		}
		else//?????????
		{
			r = (str[0] - '0') * 100 + (str[1] - '0') * 10 + (str[2] - '0');//??????
			result[2] = r / 13;
			r = r % 13;
			cout << result[2];
			for (i = 3; i < len; i++)//?????????????
			{
				r = (r * 10 + str[i] - '0');
				result[i] = r / 13;
				r = r % 13;
				cout << result[i];
			}
			cout << endl;
			cout << r << endl;
		}
	}
	return 0;
}
