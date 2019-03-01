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

//***********************************************
//???????
//??????
//???2012.12.2
//***********************************************


int main()
{
	char sentence[50];       //????????
	char a;
	int i = 0;               //??????????????
	char *p = NULL;
	while ( (a = getchar()) != '\n' )  //????
	{
		sentence[i] = a;
		i++;
	} 
	p = sentence;                      //???p?????????
	while (p < sentence + i)
	{
		if (*p != ' ')
		{
			cout << *p;
			p++;            //?????????????
		}
		else
		{
			cout << *p;     //????????
			while (*p == ' ')
			{
				p++;        //???????????
			}
		}
	}
	cout << endl;
return 0;
}