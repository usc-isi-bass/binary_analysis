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
//*   ???????               *
//*   ??????                 *
//*   ?????2011?10?31?     *
//**********************************


int main()
{
	int i, n, flag;
	char Sen[101];
	cin.getline(Sen , 100);//?????(???)
	n = strlen(Sen);//n????????
	flag = 0;//flag???????,??????0
	for(i = 0; i < n; i ++)
	{
		if(Sen[i] != ' ')
		{
			cout << Sen[i];//??????,?????
			flag = 1;//???flag???1
		}
		else//??????
		{
			if(flag == 1)//???????????
			{
				cout << " ";//??????
				flag = 0;//??flag??0
			}
		}
	}
	cout << endl;
	return 0;
}
