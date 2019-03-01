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

int main ()
{
	char str[257] = {'\0'}, substr[257] = {'\0'}, replace[257] = {'\0'};
	cin >> str >> substr >> replace;
	char * p = strstr(str, substr);
	int i = 0, flag = strlen(substr);
	if(p == NULL)
		cout << str << endl;
	else
	{
		for(i = 0; str + i < p; i ++)
		    cout << str[i];
		cout << replace;
		for(i = i + flag; i < strlen(str); i ++)
			cout << str[i];
	}
	return 0;
}