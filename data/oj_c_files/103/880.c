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


char str[1000];
int len;

int operation(int start)
{
	int i = start;
	int count = 0;
	for( ; str[i] == str[start]; i++)
		count++;
	cout << "(" << str[start] << "," << count << ")";

	return count;
}

int main()
{
	int i;
	cin >> str;
	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if(str[i] > 90)
			str[i] -= 32;
	}
	for(i = 0; i < len; i++)
		i += operation(i) - 1;
	cout <<endl;

	return 0;
}