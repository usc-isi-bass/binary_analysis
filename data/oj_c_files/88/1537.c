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

//****************************************************************
// ????1000012789_3.cpp                                      *
// ???wusy                                                    *
// ???12,8                                                    *
// ???????                                                *
//****************************************************************
int main()
{           
	int i;
	char a[31];
	cin.getline(a,31);

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] <= '9' && a[i] >= '0' && a[i + 1] <= '9' && a[i + 1] >= '0')
			cout << a[i];
		if (a[i] <= '9' && a[i] >= '0' && ( a[i + 1] > '9' || a[i + 1] < '0' ))
			cout << a[i] << endl;
	}
	return 0;
}

