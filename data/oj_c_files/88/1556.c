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
//????1000012825             *
//??????                   *
//???12.10                    *
//?????????             *
//********************************
int main ()
{
	char str[30];
	cin.getline( str, 31);
	char *p = str;
	int flag = 0;  //???????
	for ( p = str; *p != '\0'; p++ )
	{
		if ( *p >= '0' && *p <= '9')
		{
			cout << *p;
			flag = 1;  //????????????flag = 1
		}
		else
		{
			if ( flag == 1)
			{
				cout << endl;
				flag = 0;	//????????flag = 0,???????????????
			}
		}
	}
	cout << endl;
	return 0;
}

			
