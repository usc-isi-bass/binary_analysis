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

//*************************
//*???2013?11?15?   *
//*??????           *
//*????????       *
//*************************

int main()
{
	int i, begin;                                //??????i??????begin
	char a[1000];
	while(1)                                     //????
	{
		cin.getline(a,999);                       //?????
		if(a[0] == '\0')
			break;                               //??????????????
		
		for(i = 0; i <= 999; i++)
		{
			if(a[i] != ' ')
			{
				begin = i;
				break;                           //??????????????????????
			}
		}
		
		for(i = begin; i <= 999; i++)             //???????
		{
			//??????????????????
			if(a[i] != ' ' || (a[i] == ' ' && a[i+1] != ' ' && a[i+1] != '\0'))
			{
				cout << a[i];
			}
			if(a[i+1] == '\0')
				break;                           //?\0?????
		}

		cout << endl;
	}

	return 0;
}