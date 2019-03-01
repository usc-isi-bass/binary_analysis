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
// ????1000012789_1.cpp                                      *
// ???wusy                                                    *
// ???12,8                                                    *
// ???????                                                *
//****************************************************************
int main()
{
	char a[100];
	cin.getline(a,100);
	int i, j, count = 0;
	char *p = NULL;

	for (i = 1; a[i - 1] != '\0'; i++)
	{
		if (a[i] == ' ')
			count++;
		else 
		{
			if (count >= 2)
			{
				for (j = i; a[j - 1] != '\0'; j++)
					a[j - count + 1] = a[j];
				i = i - count + 1;
			}
			count = 0;
		}

	}
	p = a;
	for (p = a, i = 0; a[i] != '\0'; i++)
		cout << p[i];
	return 0;
}
	
	