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

//**********************************************************
//*  ?????1.cpp                                       *
//*  ??????1200012906                                *
//*  ???2012?12?3?                                   *
//*  ????????????                              *
//**********************************************************

int main()
{
	int flag = 0;
	char str[100], *p = NULL;
	cin.getline(str,100);
	for (p = str; *p != '\0'; p++)  //????
	{
		if (*p == ' ')   //?????
		{
			if (flag == 1)   //??????????????
				continue;
			else       //????????????
			{
				cout << *p;
				flag = 1;
			}
		}
		else     //???????????????????
		{
			cout << *p;
			flag = 0;
		}
	}
	cout << endl;
	return 0;
}