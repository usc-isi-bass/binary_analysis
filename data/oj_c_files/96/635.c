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
//*????3.cpp                ** 
//*?????13                 **
//*?????? 1200012834      **
//*???2012.11.10             **
//********************************

int main()
{
	char num[101];   // num??????
	int quot[101], r, i, temp, weishu = 0;  // quot????????weishu??????
	cin >> num;
	if (num[1] == '\0' ||
		(num[0] == '1' && (num[1] == '0' || num[1] == '1' || num[1] == '2') && num[2] == '\0'))
	{
		cout << 0 << endl << num;  // ????????0?12??????
	}
	else
	{
		r = num[0] - '0';         // ????r?????????
		for (i = 0; num[i+1] != '\0'; i++)
		{
			temp = r * 10 + num[i+1] - '0';  // temp???????2???
			r = temp % 13;                   // r?temp??13???
			quot[i] = (temp - r) / 13;       // quot[i]????temp??13??
			                                 // ?????????i???
			weishu ++;         // ????????1
			temp = 0;          // temp??
		}
		if (quot[0] != 0)      // ???????????0
		{
			cout << quot[0];   // ?????
		}
		for (i = 1; i < weishu; i++)
		{
			cout << quot[i];   // ????????
		}
		cout << endl << r << endl;  // ????
	}
	return 0;
}