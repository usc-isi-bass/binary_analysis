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

//**********************************
//*???????.cpp              *
//*??????                    *
//*???2011-11-23                *
//**********************************


char str[101];                                   //??????
void function(char *q, int flag)                 //??flag???????????????????????????0??????1
{
	if (!*q)
	{
		return ;                                 //??????????????
	}
	if (*q != ' ')
	{
		cout << *q;                              //??????????????????1
		flag = 1;
	}
	else
		if (flag)
		{
			cout << " ";                         //??????????????????????????????0
			flag = 0;
		}
		return function(q + 1, flag);            //???????
}
int main()
{
	cin.getline(str,100);                        //?????
	function(str, 0);                            //???????????
	return 0;
}
