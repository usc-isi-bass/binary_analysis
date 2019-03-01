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
	char str[100 + 10] = {'\0'};
	gets(str);
	int space = 1;
	for (int i = 0; str[i]; i ++)
	{
		if (str[i] == ' ' && space)
		    {space = 0; cout << str[i];}
		if (str[i] != ' ') 
		    {space = 1; cout << str[i];}
	}
	cout << endl;
	return 0;
}