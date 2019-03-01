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
	char *se, a[100], n, i;
	cin.getline(a, 100);
    se = a;
	n = strlen(a);
	for(i = 0; *(se + i) != '\0'; i ++)
	{
		if(*(se + i - 1)== ' ' && *(se + i)== ' ')
		{
			strcpy(se + i, se + i + 1);
			i--;
		}
	}
	cout << se << endl;
	return 0;
}