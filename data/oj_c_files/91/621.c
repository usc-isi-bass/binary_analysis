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

//**************************************
//????????????
//???:??
//????:2010.12.18
//????:??????
//**************************************

int main ()
{
	//??????????????????????????
	char str1[101],str2[101] = {0};
	int i;//??????
	cin.getline(str1,101);
	for ( i = 0; i < 101; i++)
	{
		if ( str1[i] == '\0')
			break;//?'\0'??
		else
		{
			if ( str1[i+1] == '\0')
				str2[i] = str1[i] + str1[0];//?????????????????????????
			else
				str2[i] = str1[i] + str1[i+1];
		}
	}
		cout << str2 << endl;
	return 0;
}