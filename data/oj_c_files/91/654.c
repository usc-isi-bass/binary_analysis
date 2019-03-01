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

//Name: ???????#
//Author:   ??      #
//Number: 1000062710  #
//Date: 2010?12?15?#
//#####################
int main()
{
	char str[101];
	cin.getline(str,101);
	int lin = strlen(str);
	char a[100];
	for(int i = 0; i <= lin; i++)
	{
		if(i < lin)
			str[i] = str[i];
		else
			str[i] = str[0];
    }
	for(int j = 0; j < lin; j++)
	{
		a[j] = str[j] + str[j + 1];
		cout << a[j];
	}
	cout << endl;
	return 0;
}