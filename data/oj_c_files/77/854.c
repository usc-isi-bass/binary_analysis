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

//****************************
//???????
//?????
//???2011-11-22
//****************************
char a[10000];            //??????
int function(int);          //????
int main()
{
	int i, j;
	cin.getline(a, 10000);           //?????
	for(i = 0;a[i] != '\0';i++)
	{
		if(a[i] != a[0])                  //???????
		{
			j = function(i - 1);          //??????????????
			cout << j << " " << i << endl;           //?????????????
			a[j] = a[i];           //???????????
		} 
	}
	return 0;
}
int function(int j)
{
	if(a[j] == a[0])
	{
		return j;
	}
	else
	{
		return function(j - 1);
	}
}