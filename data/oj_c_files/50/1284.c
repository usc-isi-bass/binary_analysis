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
???:?????
??:???
????:2011.11.2
*/
int main() //???
{
	int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, sum = 0, i, j = 1, w, day[13] = {0}; // ??????????????
	cin >> w; // ?????????
	for(i = 1 ; i <= 12 ; i++)
	{
		sum = sum + month[i - 1];
		day[j] = sum + 12;  //???1.1????13????
		j++;
	}
	for(i = 1 ; i <= 12 ; i++)
	{
		day[i] = day[i] % 7;
		day[i] = (day[i] + w) % 7; //?????7???,?????
	}
	for(i = 1 ; i <= 12 ; i++)
	{
		if(day[i] == 5)
		{
			cout << i << endl; //???????
		}
	}
	return 0;
}

