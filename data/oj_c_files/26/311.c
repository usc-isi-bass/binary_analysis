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
	char a[100], *b;
	cin.getline(a, 101);
	b = a;
	int i, j = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if(a[i] != ' ')
			*(b + j) = a[i];
		if (a[i - 1] != ' ' && a[i] == ' ')
			*(b + j) = ' ';
		
		if (a[i - 1] == ' ' && a[i] == ' ')
			continue;
		j++;
		
	}
	*(b + j) = '\0';
	for (i = 0; *(b + i) != '\0'; i++)
		cout << *(b + i);


	return 0;
}

