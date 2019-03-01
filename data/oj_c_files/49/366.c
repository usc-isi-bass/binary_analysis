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


void check_palin(char str[], int begin, int end)
{
	int i, palin = 1;
	for (i = begin; i <= end; i ++)
		if (str[i] != str[begin + end - i]) palin = 0;
	
	if (palin)
	{
		for (i = begin; i <= end; i ++)
			cout << str[i];
		cout << endl;	
	}
}

int main()
{
	char str[500 + 10];
	int i, j, k;
	cin.getline(str, 501);
	for (j = 2; j <= strlen(str); j ++)
		for (i = 0; i < strlen(str); i ++)
			check_palin(str, i , i + j - 1);
	return 0;
}