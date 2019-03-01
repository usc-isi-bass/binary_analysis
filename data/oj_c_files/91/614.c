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

int main()
{
	char str[101] , temp;
	int i;

	cin.getline(str , 101);

	temp = str[0];
	for(i = 0; str[i + 1] != 0; i++)
		str[i] += str[i + 1];
			
	str[i] += temp;

	cout << str << endl;
	return 0;
}