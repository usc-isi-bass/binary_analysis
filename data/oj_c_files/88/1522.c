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

//**********************************************
//**???????******************************
//**?????? 1000012741*********************
//**???2010?12?10?************************
//**********************************************
int main()
{
	char str[31], *p;                    //??str????,p???
	cin.getline(str, 31);                //?????
	p = str;                             //?p?????????
	int flag = 0;                        //flag???????????
	do
	{
		if (*p >= '0' && *p <= '9')      //????????
		{
			cout << *p;                  //?????
			p++;                         //??????????
			flag = 1;                    //?flag?1
		}
		else                             //?????????
		{
			p++;                         //??????????
			if (*p >= '0' && *p <= '9' && flag == 1)  //?????????????????
				cout << endl;            //??
		}
	} while (*p != '\0');                //??????????
	cout << endl;
	return 0;
}
//*********************************************