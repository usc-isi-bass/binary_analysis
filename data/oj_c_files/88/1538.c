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
	char a[31], *p = NULL;
	cin.getline(a,31);
	p = a;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) <= '9' && *(p + i) >= '0' && *(p + i + 1) <= '9' && *(p + i + 1) >= '0')
			cout << *(p + i);
		if (*(p + i) <= '9' && *(p + i) >= '0' && ( *(p + i + 1) > '9' || *(p + i + 1) < '0' ))
			cout << *(p + i) << endl;
	}
	return 0;
}

