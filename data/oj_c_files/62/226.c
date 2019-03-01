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

/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 
* @description
*         ???????
*/


int main()
{
	char w[1000];
	int i = 0, j = 0, flag = 1, l;
	cin.getline(w, 1000);
	l = strlen(w);
	for(i = 0; i < l; i++)
	{
		if(w[i] != 32) 
			flag = 1;
		if(flag)
			cout << w[i];
		if(w[i] == 32)
			flag = 0;
	}
	return 0;
}