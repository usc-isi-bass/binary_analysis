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
@file 1000012837_3.cpp
@date 20101208
@author ???
@description ????
*/
int main()
{
	char str[31], *p = NULL;
	int l, flag = 0;
	cin.getline(str, 31);	//?????
	l = strlen(str);	//l??????
	for(p = str; p < str + l; p++)	//p????????????????????
	{
		if(*p >= '0' && *p <= '9')	//????????????1
		{
			flag = 1;
			cout << *p;
		}
		else
		{
			if(flag == 1)//?????????????????????0
			{
				cout << endl;
				flag = 0;
			}
		}
	}
	return 0;
}